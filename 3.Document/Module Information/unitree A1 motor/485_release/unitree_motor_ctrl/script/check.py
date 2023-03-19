#!/usr/bin/env python3
import os 
import sys
from typedef import *
from ctypes import cdll
import time


system=platform.system()
if system == 'Windows':
    libPath = os.path.dirname(os.getcwd()) + '/lib/libUnitree_motor_SDK_Win64.dll'
elif system == 'Linux':
    libPath = '/home/bian/catkin_ws/src/unitree_motor_ctrl/lib/libUnitree_motor_SDK_Linux.so'

c = cdll.LoadLibrary(libPath)

motor_s = MOTOR_send()
motor_s1 = MOTOR_send()
motor_r = MOTOR_recv()

motor_s.id = 0
motor_s.mode = 5
motor_s.T = 0           #单位：Nm, T<255.9
motor_s.W = 240.0        #单位：rad/s, W<511.9
motor_s.Pos = 0       #单位：rad, Pos<131071.9
motor_s.K_P = 0       #K_P<31.9
motor_s.K_W = 20        #K_W<63.9

motor_s1.id = 0
motor_s1.mode = 0

c.modify_data(byref(motor_s))
c.modify_data(byref(motor_s1))

fd = c.open_set(b'/dev/ttyUSB0')
# fd = c.open_set(b'COM4')

c.send_recv(fd, byref(motor_s1), byref(motor_r))
print('START')

c.send_recv(fd, byref(motor_s), byref(motor_r))
time.sleep(5)

c.send_recv(fd, byref(motor_s1), byref(motor_r))
print('END')

c.close_serial(fd)
