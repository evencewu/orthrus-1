cmake_minimum_required(VERSION 2.8.3)
project(motor_ctrl)

set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -O3 -march=native -Wall")

include_directories(include)
link_directories(lib)

# x86
add_executable(MotorCtrlEPOLL src/check.c)
target_link_libraries(MotorCtrlEPOLL libUnitree_motor_SDK_Linux64_EPOLL.so)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)