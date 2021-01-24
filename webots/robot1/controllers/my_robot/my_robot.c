/*
 * File:          my_robot.c
 * Date:          
 * Description:   
 * Author:        
 * Modifications: 
 */


#include <webots/robot.h>
#include <webots/servo.h>
#include <assert.h>
#include <math.h>
#include <stdio.h>


#define TIME_STEP 16
#define rad_2_deg(X) ( X / pi * 180.0 )
#define deg_2_rad(X) ( X / 180.0 * pi )
#define pi 3.1415926
#define T 1


int main(int argc, char **argv)
{
  
  WbDeviceTag servos[8];
  const char *SERVO_NAMES[] = { 
   "fore_left_1",
   "fore_right_1", 
   "hind_left_1", 
   "hind_right_1", 
   "fore_left_2",
   "fore_right_2", 
   "hind_left_2", 
   "hind_right_2", 
    NULL };
    
  double Ah = 10 ;
  double Ak = 15 ;
  double t = 0.0;
  wb_robot_init();
  printf("robot inited!\n");

  int i;
  for (i = 0; SERVO_NAMES[i]; i++) {
    servos[i] = wb_robot_get_device(SERVO_NAMES[i]);
    assert(servos[i]);
  }


  while (wb_robot_step(TIME_STEP) != -1) {
    



    double lf_hip_pos = Ah * sin(2 * pi / T * t - pi / 2);
    double lf_knee_pos = Ak * sin(2 * pi / T * t + pi) ;
    double lb_hip_pos =  Ah * sin(2 * pi / T * t + pi / 2);
    double lb_knee_pos = Ak * sin(2 * pi / T * t) ;
    double rf_hip_pos = Ah * sin(2 * pi / T * t + pi / 2);
    double rf_knee_pos = Ak * sin(2 * pi / T * t) ;
    double rb_hip_pos =  Ah * sin(2 * pi / T * t - pi / 2);
    double rb_knee_pos = Ak * sin(2 * pi / T * t + pi) ;
    

    
     wb_servo_set_position(servos[0], deg_2_rad(lf_hip_pos));
     wb_servo_set_position(servos[1], deg_2_rad(rf_hip_pos));
     wb_servo_set_position(servos[2], deg_2_rad(lb_hip_pos));
     wb_servo_set_position(servos[3], deg_2_rad(rb_hip_pos));

     wb_servo_set_position(servos[4], deg_2_rad(lf_knee_pos));
     wb_servo_set_position(servos[5], deg_2_rad(rf_knee_pos));
     wb_servo_set_position(servos[6], deg_2_rad(lb_knee_pos));
     wb_servo_set_position(servos[7], deg_2_rad(rb_knee_pos));
     
     
     t += (double)TIME_STEP / 1000.0;
     
    
  };
  
  wb_robot_cleanup();
  
  return 0;
}
