#include <geometry_msgs/Quaternion.h>
#include <ros/ros.h>

#include <serial/serial.h>

#include <sensor_msgs/Imu.h>

#include <geometry_msgs/PoseStamped.h>

#include <sensor_msgs/Temperature.h>

#include <std_msgs/String.h>
#include <std_srvs/Empty.h>
#include <string>
#include <tf/transform_broadcaster.h>
#include <tf/transform_datatypes.h>
#include <fstream>

#include "analysis_data.h"

enum PARSE_STATES {
	FIND_HEAD_0,
	FIND_HEAD_1,
	FIND_LENGTH,
	FIND_END
};

sensor_msgs::Imu g_imu;

void publish_imu(const ros::Publisher &imu_pub, const ros::Publisher &imu_pose_pub,
                 const protocol_info_t &imu_data) {
  // publish imu message
  g_imu.header.stamp = ros::Time::now();

  g_imu.orientation = tf::createQuaternionMsgFromRollPitchYaw(
      imu_data.roll / 180.0 * M_PI, imu_data.pitch / 180.0 * M_PI,
      imu_data.yaw / 180.0 * M_PI);
//   std::cout << imu_data.roll << ", " << imu_data.pitch << ", " << imu_data.yaw << ", " << std::endl;

  g_imu.angular_velocity.x = imu_data.angle_x/180.0*M_PI;
  g_imu.angular_velocity.y = imu_data.angle_y/180.0*M_PI;
  g_imu.angular_velocity.z = imu_data.angle_z/180.0*M_PI;

  g_imu.linear_acceleration.x = imu_data.accel_x;
  g_imu.linear_acceleration.y = imu_data.accel_y;
  g_imu.linear_acceleration.z = imu_data.accel_z;

  imu_pub.publish(g_imu);

  geometry_msgs::PoseStamped pose;
  pose.header.frame_id = "imu_link";
  pose.header.stamp = g_imu.header.stamp;
  pose.pose.position.x = 0.0;
  pose.pose.position.y = 0.0;
  pose.pose.position.z = 0.0;
  pose.pose.orientation.w = g_imu.orientation.w;
  pose.pose.orientation.x = g_imu.orientation.x;
  pose.pose.orientation.y = g_imu.orientation.y;
  pose.pose.orientation.z = g_imu.orientation.z;
  imu_pose_pub.publish(pose);
}

int main(int argc, char **argv)
{
	serial::Serial ser;
	std::string port;
	int baud_rate = 460800;
	int buf_size = 1000;
	std::string tf_parent_frame_id;
	std::string tf_frame_id;
	std::string frame_id;
	double time_offset_in_seconds;
	bool broadcast_tf;
	double linear_acceleration_stddev;
	double angular_velocity_stddev;
	double orientation_stddev;
	uint8_t last_received_message_number;
	bool received_message = false;
	int data_packet_start;

	tf::Quaternion orientation;
	tf::Quaternion zero_orientation;

	ros::init(argc, argv, "yesense_imu_node");

	ros::NodeHandle private_node_handle("~");
	private_node_handle.param<std::string>("port", port, "/dev/ttyUSB0");
	private_node_handle.param<int>("baud_rate", baud_rate, 460800);
	private_node_handle.param<std::string>("tf_parent_frame_id", tf_parent_frame_id, "imu_base");
	private_node_handle.param<std::string>("tf_frame_id", tf_frame_id, "imu_link");
	private_node_handle.param<std::string>("frame_id", frame_id, "imu_link");
	private_node_handle.param<double>("time_offset_in_seconds", time_offset_in_seconds, 0.0);
	private_node_handle.param<bool>("broadcast_tf", broadcast_tf, true);
	private_node_handle.param<double>("linear_acceleration_stddev", linear_acceleration_stddev, 0.0);
	private_node_handle.param<double>("angular_velocity_stddev", angular_velocity_stddev, 0.0);
	private_node_handle.param<double>("orientation_stddev", orientation_stddev, 0.0);

	ros::NodeHandle nh("imu");
	ros::Publisher imu_pub = nh.advertise<sensor_msgs::Imu>("data", 100);
	ros::Publisher imu_pose_pub = nh.advertise<geometry_msgs::PoseStamped>("pose", 100);

	ros::Rate r(200); // 200 hz

	// sensor_msgs::Imu g_imu;
	g_imu.header.frame_id = frame_id;

	g_imu.linear_acceleration_covariance[0] = linear_acceleration_stddev;
	g_imu.linear_acceleration_covariance[4] = linear_acceleration_stddev;
	g_imu.linear_acceleration_covariance[8] = linear_acceleration_stddev;

	g_imu.angular_velocity_covariance[0] = angular_velocity_stddev;
	g_imu.angular_velocity_covariance[4] = angular_velocity_stddev;
	g_imu.angular_velocity_covariance[8] = angular_velocity_stddev;

	g_imu.orientation_covariance[0] = orientation_stddev;
	g_imu.orientation_covariance[4] = orientation_stddev;
	g_imu.orientation_covariance[8] = orientation_stddev;

	// std::ofstream fs("/tmp/imu_data.txt");

	std::string input;
	std::string read;
	PARSE_STATES state = FIND_HEAD_0;
	int data_len = 0;
	int head_ind = 0;

	while (ros::ok())
	{
		try
		{
			if (ser.isOpen())
			{
				// read string from serial device
				if (ser.available())
				{
					read = ser.read(ser.available());
					// char log_data[1024] = {0};
					// for (unsigned int i = 0; i < read.size(); i++)
					// {
					// 	char tmp[16] = {0};
					// 	sprintf(tmp, "%02X ", (unsigned char)read.at(i));
					// 	strcat(log_data, tmp);
					// }
					// fs << log_data;
					// fs.flush();

					if (input.size() > buf_size)
					{
						ROS_WARN("input.size() > buf_size: %ld/%d", input.size(), buf_size);
						input.clear();
						state = FIND_HEAD_0;
					}

					for (unsigned int i = 0; i < read.size(); i++) {
						if (state == FIND_HEAD_0) {
							if (read.at(i) == (char)(0x59)) {
								input.clear();
								input += read.at(i);
								state = FIND_HEAD_1;
							}
						} else if (state == FIND_HEAD_1) {
							if (read.at(i) == (char)(0x53)) {
								input += read.at(i);
								state = FIND_LENGTH;
							} else {
								state = FIND_HEAD_0;
							}
						} else if (state == FIND_LENGTH) {
							input += read.at(i);
							if (input.size() > 7)
							{
								unsigned char *len = (unsigned char *)input.data() + 4;
								data_len = *len;
								data_len += 7;
								state = FIND_END;
							}
						} else if (state == FIND_END) {
							input += read.at(i);
							if (input.size() >= data_len)
							{
								std::string sentence = input;//input.substr(0, data_len);
								// input = input.substr(data_len);
								// process sentense
								// ...
								int e = analysis_data((unsigned char*)sentence.data(), sentence.size());
								if (e != analysis_ok)
								{
									ROS_WARN("analysis_data() FAILED!!!! %d", e);
									for (unsigned int i = 0; i < sentence.size(); i++)
									{
										char aaa[1024] = {0};
										sprintf(aaa, "%02X ", (unsigned char)sentence.at(i));
										std::cout << aaa;
									}
									std::cout << "data len: " << data_len << std::endl;
								}
								else
								{
									publish_imu(imu_pub, imu_pose_pub, g_output_info);
								}
								
								state = FIND_HEAD_0;
							}
						}
					}
				}
			}
			else
			{
				// try and open the serial port
				try
				{
					ROS_INFO("port:%s, rate:%d", port.c_str(), baud_rate);
					ser.setPort(port);
					ser.setBaudrate(baud_rate);
					serial::Timeout to = serial::Timeout::simpleTimeout(1000);
					ser.setTimeout(to);
					ser.open();
				}
				catch (serial::IOException &e)
				{
					ROS_ERROR_STREAM("Unable to open serial port " << ser.getPort() << ". Trying again in 5 seconds.");
					ros::Duration(5).sleep();
				}

				if (ser.isOpen())
				{
					ROS_DEBUG_STREAM("Serial port " << ser.getPort() << " initialized and opened.");
				}
			}
		}
		catch (serial::IOException &e)
		{
			ROS_ERROR_STREAM("Error reading from the serial port " << ser.getPort() << ". Closing connection.");
			ser.close();
		}
		ros::spinOnce();
		r.sleep();
	}

	// fs.close();
}
