cmake_minimum_required(VERSION 3.5)
project(orthrus_ctrl)

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
find_package(soem_ros2 REQUIRED)


include_directories(include)
link_directories(lib)


add_executable(test_motor src/test_motor.cpp)
ament_target_dependencies(test_motor rclcpp)
target_link_libraries(test_motor ${PROJECT_SOURCE_DIR}/lib/libunitreeMotorSDK_Linux64.so)

add_executable(changeID src/changeID.cpp)
ament_target_dependencies(changeID rclcpp)
target_link_libraries(changeID ${PROJECT_SOURCE_DIR}/lib/libunitreeMotorSDK_Linux64.so)

add_executable(test_ecat src/test_ecat.cpp)
ament_target_dependencies(test_ecat rclcpp soem_ros2)



install(
  DIRECTORY include/
  DESTINATION include/
)

install(
  DIRECTORY lib/
  DESTINATION lib/
)

install(
  TARGETS 
  test_motor
  changeID
  test_ecat
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


