cmake_minimum_required(VERSION 3.5)
project(check)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(data REQUIRED) 

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
include_directories(
  include/unitree_motor_ctrl
  ${catkin_INCLUDE_DIRS}
)

link_directories(
  ${catkin_LIB_DIRS} lib
)

add_executable            (check_acc_all src/check_acc_all.cpp)
target_link_libraries     (check_acc_all ${catkin_LIBRARIES} Unitree_motor_SDK_ARM64_EPOLL)
ament_target_dependencies (check_acc_all ament_cmake rclcpp std_msgs)

add_executable            (check_acc_leg src/check_acc_leg.cpp)
target_link_libraries     (check_acc_leg ${catkin_LIBRARIES} Unitree_motor_SDK_ARM64_EPOLL)
ament_target_dependencies (check_acc_leg ament_cmake rclcpp std_msgs)

add_executable            (check_acc_motor src/check_acc_motor.cpp)
target_link_libraries     (check_acc_motor ${catkin_LIBRARIES} Unitree_motor_SDK_ARM64_EPOLL)
ament_target_dependencies (check_acc_motor ament_cmake rclcpp std_msgs)

add_executable            (check_foc_motor src/check_foc_motor.cpp)
target_link_libraries     (check_foc_motor ${catkin_LIBRARIES} Unitree_motor_SDK_ARM64_EPOLL)
ament_target_dependencies (check_foc_motor ament_cmake rclcpp std_msgs data serial)

add_executable            (check_pos_all src/check_pos_all.cpp)
target_link_libraries     (check_pos_all ${catkin_LIBRARIES} Unitree_motor_SDK_ARM64_EPOLL)
ament_target_dependencies (check_pos_all ament_cmake rclcpp std_msgs data serial)

add_executable            (check_pos_leg src/check_pos_leg.cpp)
target_link_libraries     (check_pos_leg ${catkin_LIBRARIES} Unitree_motor_SDK_ARM64_EPOLL)
ament_target_dependencies (check_pos_leg ament_cmake rclcpp std_msgs data serial)
 
add_executable            (check_pos_motor src/check_pos_motor.cpp)
target_link_libraries     (check_pos_motor ${catkin_LIBRARIES} Unitree_motor_SDK_ARM64_EPOLL)
ament_target_dependencies (check_pos_motor ament_cmake rclcpp std_msgs data serial)




install(
  DIRECTORY include/
  DESTINATION include
)

install(
  DIRECTORY lib/
  DESTINATION lib
)

install(
  TARGETS 
  check_acc_all
  check_acc_leg
  check_acc_motor
  check_pos_all
  check_pos_all
  check_pos_leg
  check_pos_motor

  
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
