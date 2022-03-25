# The example to run the raibert controller in a Minitaur gym env.

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import os
import inspect

currentdir = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))
parentdir = os.path.dirname(os.path.dirname(os.path.dirname(currentdir)))
os.sys.path.insert(0, parentdir)

import tensorflow as tf
import gait as minitaur_raibert_controller
import minitaur_gym_env
import pyqtgraph as pg
import numpy as np
import math
from plot_data import Plot
from brain_ import Brain_Param
from leg_ import Leg_Param

flags = tf.app.flags
FLAGS = tf.app.flags.FLAGS

flags.DEFINE_float("motor_kp", 1.5, "The position gain of the motor.")
flags.DEFINE_float("motor_kd", 0.015, "The speed gain of the motor.")
flags.DEFINE_float("control_latency", 0.00, "The latency between sensor measurement and action"
                                            " execution the robot.")
flags.DEFINE_string("log_path", None, "The directory to write the log file.")

# init param
FL = 0
BL = 1
FR = 2
BR = 3
en_att_jacobi = 0
off_att_jacobi = 0 * 7

CONTROL_TORQUE = True
INIT_KP = 1.0
INIT_KD = 0.015
treg = 0
t_test = np.zeros(10)
leg = [Leg_Param(id=0, torque_flag=[1, 1], m_kp=INIT_KP, m_kd=INIT_KD),
       # FL    0   HEAD   2
       Leg_Param(id=1, torque_flag=[1, 1], m_kp=INIT_KP, m_kd=INIT_KD),  # BL
       Leg_Param(id=2, torque_flag=[1, 1], m_kp=INIT_KP, m_kd=INIT_KD),  # FR
       Leg_Param(id=3, torque_flag=[1, 1], m_kp=INIT_KP,
                                             m_kd=INIT_KD)]  # BR    1          3
brain = Brain_Param()
plot = Plot()

env = minitaur_gym_env.MinitaurGymEnv(
    # urdf_version = minitaur_gym_env.DEFAULT_URDF_VERSION,
    # urdf_version = minitaur_gym_env.DERPY_V0_URDF_VERSION,
    urdf_version=minitaur_gym_env.RAINBOW_DASH_V0_URDF_VERSION,
    control_time_step=0.004,
    action_repeat=1,
    pd_latency=0.000,
    control_latency=FLAGS.control_latency,
    motor_kp=FLAGS.motor_kp,
    motor_kd=FLAGS.motor_kd,
    remove_default_joint_damping=True,
    leg_model_enabled=False,
    render=True,
    on_rack=False,
    accurate_motor_model_enabled=True,
    torque_control_enabled=CONTROL_TORQUE,
    log_path=FLAGS.log_path)
env.reset()

controller = minitaur_raibert_controller.MinitaurRaibertTrottingController(env.minitaur)

def param_init():
    brain.mstate = 'IDLE'
    leg[FL].flag_rl = 1
    leg[FL].flag_fb = 1
    leg[BL].flag_rl = 1
    leg[BL].flag_fb = -1
    leg[FR].flag_rl = -1
    leg[FR].flag_fb = 1
    leg[BR].flag_rl = -1
    leg[BR].flag_fb = -1
    for i in range(0, 4):
        leg[i].swing_time = brain.gait_sw
        leg[i].swing_pos_ed[2] = -0.22

def main_sfm(t):
    if brain.mstate == 'IDLE':
        for i in range(0, 4):
            leg[i].m_angle_cmd[0] = 45
            leg[i].m_angle_cmd[1] = 45

        brain.timer[0] = brain.timer[0] + t
        if brain.timer[0] > 0.5:
            brain.timer[0] = 0
            brain.mstate = 'STAND'

    elif brain.mstate == 'STAND':
        for i in range(0, 4):
            leg[i].m_angle_cmd[0] = 90 + 45 * 0
            leg[i].m_angle_cmd[1] = 90 + 45 * 0

        brain.timer[0] = brain.timer[0] + t
        if brain.timer[0] > 0.25:
            brain.timer[0] = 0
            for i in range(0, 4):
                brain.control_mode[i] = 'MOTOR_POS'
            brain.mstate = 'SW_PLAN'
        # brain.mstate = 'HOLD_TEST'

    elif brain.mstate == 'SW_PLAN':
        if math.fabs(brain.exp_spd_b[1]) > 0.0005:
            brain.mstate = 'SW_TRIG'
            if brain.switch_flag == 0:
                (leg[FL].swing_pos_ed[1], leg[FL].swing_pos_ed[2]) = leg[FL].cal_tar_end_pos(en_att_jacobi,
                                                                                             pitch=brain.att[0],
                                                                                             body_z=brain.pos_n[2],
                                                                                             stance_time=brain.gait_st)
                leg[FL].swing_pos_st[1] = leg[FL].pos_est[0]
                leg[FL].swing_pos_st[2] = leg[FL].pos_est[1]
                leg[FL].time_trig = 0
                leg[FL].trig_state = 0
                leg[FL].ground_state = 0

                (leg[BR].swing_pos_ed[1], leg[BR].swing_pos_ed[2]) = leg[BR].cal_tar_end_pos(en_att_jacobi,
                                                                                             pitch=brain.att[0],
                                                                                             body_z=brain.pos_n[2],
                                                                                             stance_time=brain.gait_st)
                leg[BR].swing_pos_st[1] = leg[BR].pos_est[0]
                leg[BR].swing_pos_st[2] = leg[BR].pos_est[1]
                leg[BR].time_trig = 0
                leg[BR].trig_state = 0
                leg[BR].ground_state = 0

                leg[FL].cal_curve_swing()
                leg[BR].cal_curve_swing()
            else:
                (leg[FR].swing_pos_ed[1], leg[FR].swing_pos_ed[2]) = leg[FR].cal_tar_end_pos(en_att_jacobi,
                                                                                             pitch=brain.att[0],
                                                                                             body_z=brain.pos_n[2],
                                                                                             stance_time=brain.gait_st)
                leg[FR].swing_pos_st[1] = leg[FR].pos_est[0]
                leg[FR].swing_pos_st[2] = leg[FR].pos_est[1]
                leg[FR].time_trig = 0
                leg[FR].trig_state = 0
                leg[FR].ground_state = 0

                (leg[BL].swing_pos_ed[1], leg[BL].swing_pos_ed[2]) = leg[BL].cal_tar_end_pos(en_att_jacobi,
                                                                                             pitch=brain.att[0],
                                                                                             body_z=brain.pos_n[2],
                                                                                             stance_time=brain.gait_st)
                leg[BL].swing_pos_st[1] = leg[BL].pos_est[0]
                leg[BL].swing_pos_st[2] = leg[BL].pos_est[1]
                leg[BL].time_trig = 0
                leg[BL].trig_state = 0
                leg[BL].ground_state = 0

                leg[FR].cal_curve_swing()
                leg[BL].cal_curve_swing()

    elif brain.mstate == 'SW_TRIG':
        # print( leg[FL].ground_state , leg[BL].ground_state ,leg[FR].ground_state ,leg[BR].ground_state)
        if brain.switch_flag == 0:
            brain.control_mode[FL] = 'MOTOR_POS'
            brain.control_mode[BR] = 'MOTOR_POS'
            leg[FL].trig_curve(brain.att[0] * en_att_jacobi + off_att_jacobi, t)
            leg[BR].trig_curve(brain.att[0] * en_att_jacobi + off_att_jacobi, t)

            if leg[FL].ground_state == 1 and leg[BL].ground_state == 1 and leg[FR].ground_state == 1 and leg[
                BR].ground_state == 1:
                brain.switch_flag = 1
                brain.control_mode[FL] = 'TORQUE'
                brain.control_mode[BR] = 'TORQUE'
                brain.mstate = 'HOLD'
                #leg[FL].reset_leg_controller()
                #leg[BR].reset_leg_controller()

        else:
            brain.control_mode[FR] = 'MOTOR_POS'
            brain.control_mode[BL] = 'MOTOR_POS'
            leg[FR].trig_curve(brain.att[0] * en_att_jacobi + off_att_jacobi, t)
            leg[BL].trig_curve(brain.att[0] * en_att_jacobi + off_att_jacobi, t)

            if leg[FL].ground_state == 1 and leg[BL].ground_state == 1 and leg[FR].ground_state == 1 and leg[
                BR].ground_state == 1:
                brain.switch_flag = 0
                brain.control_mode[FR] = 'TORQUE'
                brain.control_mode[BL] = 'TORQUE'
                brain.mstate = 'HOLD'
                #leg[FR].reset_leg_controller()
                #leg[BL].reset_leg_controller()

    elif brain.mstate == 'HOLD':
        brain.timer[0] = brain.timer[0] + t
        if brain.timer[0] > t * 2:
            brain.timer[0] = 0
            brain.mstate = 'SW_PLAN'

    elif brain.mstate == 'HOLD_TEST':
        brain.timer[0] = brain.timer[0] + t
        brain.control_mode[FR] = 'TORQUE'
        brain.control_mode[BL] = 'TORQUE'
        brain.control_mode[FL] = 'TORQUE'
        brain.control_mode[BR] = 'TORQUE'
    return 0

def robot_thread():
    global  treg
    t = env.minitaur.GetTimeSinceReset()
    dt = t - treg
    for i in range(0, len(t_test)):
        t_test[i] = t_test[i] + dt
    #print('Dt=:', dt)
    # -----------------------------------state measurement
    temp = env.get_minitaur_motor_angles() * 57.3
    leg[0].m_angle[0] = temp[0]
    leg[0].m_angle[1] = temp[1]
    leg[1].m_angle[0] = temp[2]
    leg[1].m_angle[1] = temp[3]
    leg[2].m_angle[0] = temp[5]
    leg[2].m_angle[1] = temp[4]
    leg[3].m_angle[0] = temp[7]
    leg[3].m_angle[1] = temp[6]

    temp = env.get_minitaur_motor_velocities() * 57.3
    leg[0].m_angle_spd[0] = temp[0]
    leg[0].m_angle_spd[1] = temp[1]
    leg[1].m_angle_spd[0] = temp[2]
    leg[1].m_angle_spd[1] = temp[3]
    leg[2].m_angle_spd[0] = temp[5]
    leg[2].m_angle_spd[1] = temp[4]
    leg[3].m_angle_spd[0] = temp[7]
    leg[3].m_angle_spd[1] = temp[6]

    # forward est epos
    leg[0].mangle_to_epose(dt, brain.att[0] * en_att_jacobi + off_att_jacobi)
    leg[1].mangle_to_epose(dt, brain.att[0] * en_att_jacobi + off_att_jacobi)
    leg[2].mangle_to_epose(dt, brain.att[0] * en_att_jacobi + off_att_jacobi)
    leg[3].mangle_to_epose(dt, brain.att[0] * en_att_jacobi + off_att_jacobi)

    # invert_calculate for test only
    # leg[0].epose_to_mangle(brain.att[0] * en_att_jacobi + off_att_jacobi,leg[0].pos_est[0], leg[0].pos_est[1])
    # leg[1].epose_to_mangle(brain.att[0] * en_att_jacobi + off_att_jacobi,leg[1].pos_est[0], leg[1].pos_est[1])
    # leg[2].epose_to_mangle(brain.att[0] * en_att_jacobi + off_att_jacobi,leg[2].pos_est[0], leg[2].pos_est[1])
    # leg[3].epose_to_mangle(brain.att[0] * en_att_jacobi + off_att_jacobi,leg[3].pos_est[0], leg[3].pos_est[1])

    leg[0].cal_jacobi(dt, brain.att[0] * en_att_jacobi + off_att_jacobi)
    leg[1].cal_jacobi(dt, brain.att[0] * en_att_jacobi + off_att_jacobi)
    leg[2].cal_jacobi(dt, brain.att[0] * en_att_jacobi + off_att_jacobi)
    leg[3].cal_jacobi(dt, brain.att[0] * en_att_jacobi + off_att_jacobi)

    temp = env.get_minitaur_motor_torques()
    leg[0].m_torque_est[0] = temp[0]
    leg[0].m_torque_est[1] = temp[1]
    leg[1].m_torque_est[0] = temp[2]
    leg[1].m_torque_est[1] = temp[3]
    leg[2].m_torque_est[0] = temp[5]
    leg[2].m_torque_est[1] = temp[4]
    leg[3].m_torque_est[0] = temp[7]
    leg[3].m_torque_est[1] = temp[6]
    # print(leg[0].m_torque_est[0], leg[0].m_torque_cmd[0])
    temp = env.minitaur.GetBaseRollPitchYaw() * 57.3
    brain.att[0] = -temp[1]  # pitch
    brain.att[1] = -temp[0]  # roll
    brain.att[2] = -temp[2]  # yaw

    temp = env.minitaur.GetBaseRollPitchYawRate()
    brain.rate[0] = -temp[1]  # pitch rate
    brain.rate[1] = -temp[0]  # roll  rate
    brain.rate[2] = -temp[2]  # yaw   rate

    brain.state_est(leg[FL], leg[BL], leg[FR], leg[BR], dt)
    # -----['b', 'g', 'r', 'c', 'm', 'y', 'k', 'w']------plot-----------------------
    PLOT_SEL = 2
    if PLOT_SEL == 0:
        plot.draw_data[0] = leg[FR].force_est[1] / 20  # blue
        plot.draw_data[1] = leg[FL].force_est[1] / 20  # green
        plot.draw_data[2] = (leg[FR].force_cmd[1]/20-leg[FR].force_est[1]/20)  #red
    elif PLOT_SEL == 1:
        plot.draw_data[0] = brain.att[1]   # blue
        plot.draw_data[1] = brain.exp_att[1]  # blue
        #.draw_data[2] = brain.pos_n[2]  # blue
    elif PLOT_SEL == 2:
        #plot.draw_data[0] = brain.att[1]  # blue
        plot.draw_data[1] = brain.exp_pos_n[2]  # blue
        plot.draw_data[2] = brain.pos_n[2]  # blue
    # -------------------------------state machine
    main_sfm(dt)
    # ----------------------------------controll
    if CONTROL_TORQUE == False:
        env.step(controller.set_motor_angles_test(leg[0].m_angle_cmd[0], leg[0].m_angle_cmd[1],
                                                  leg[1].m_angle_cmd[0], leg[1].m_angle_cmd[1],
                                                  leg[2].m_angle_cmd[1], leg[2].m_angle_cmd[0],
                                                  leg[3].m_angle_cmd[1], leg[3].m_angle_cmd[0]
                                                  ))  # motor angle test
    if CONTROL_TORQUE == True:
        # print('MODE: ', brain.control_mode)
        Test_Spd = 0.5
        #Test_Spd = 0
        #Test_Spd = 0.006
        if t_test[0] < 2:
            brain.exp_spd_b[1] = 0.005
        elif t_test[0] < 6:
            brain.exp_spd_b[1] = Test_Spd
        elif t_test[0] < 9:
            brain.exp_spd_b[1] = -Test_Spd
        else:
            t_test[0] = 0
        brain.spd_control(dt, leg[FL], leg[BL], leg[FR], leg[BR])

        brain.att_control(dt, leg[FL], leg[BL], leg[FR], leg[BR])
        for i in range(0, 4):
            if leg[i].ground_state == 1 or 1:
                brain.vmc_control_each_leg(leg[i], dt)
            if brain.control_mode[i] == 'TORQUE_POS':
                m_torque_cmd = [0, 0]
                (m_torque_cmd[0], m_torque_cmd[1]) = leg[i].force_to_mtorque(leg[i].force_cmd[0],
                                                                             leg[i].force_cmd[1])

                leg[i].m_angle_cmd[0] = leg[i].m_angle_cmd[0] + m_torque_cmd[0]
                leg[i].m_angle_cmd[1] = leg[i].m_angle_cmd[1] + m_torque_cmd[1]

                (leg[i].m_torque_cmd[0], leg[i].m_torque_cmd[1]) = leg[i].motor_pos_control()
            elif brain.control_mode[i] == 'TORQUE':
                (leg[i].m_torque_cmd[0], leg[i].m_torque_cmd[1]) = leg[i].force_to_mtorque(leg[i].force_cmd[0],
                                                                                           leg[i].force_cmd[1])
            elif brain.control_mode[i] == 'MOTOR_POS':  # motor control mine
                (leg[i].m_torque_cmd[0], leg[i].m_torque_cmd[1]) = leg[i].motor_pos_control()

        # torque output to motor
        env.step([leg[0].m_torque_cmd[0], leg[0].m_torque_cmd[1],
                  leg[1].m_torque_cmd[0], leg[1].m_torque_cmd[1],
                  leg[2].m_torque_cmd[1], leg[2].m_torque_cmd[0],
                  leg[3].m_torque_cmd[1], leg[3].m_torque_cmd[0]
                  ])  # motor torque test
    treg = t

if __name__ == "__main__":
    param_init()  # param_init
    timer1 = pg.QtCore.QTimer()
    timer1.timeout.connect(plot.plot_thread)  # 定时刷新数据显示
    timer1.start(50)
    timer2 = pg.QtCore.QTimer()
    timer2.timeout.connect(robot_thread)  # 定时刷新数据显示
    timer2.start(1)
    plot.app.exec_()
