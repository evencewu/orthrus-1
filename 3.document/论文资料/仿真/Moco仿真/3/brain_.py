import math
import numpy as np
from leg_ import Leg_Param
import leg_

DIAGONAL_LEG_PAIR_1 = (0, 3)
DIAGONAL_LEG_PAIR_2 = (1, 2)
D_T_R = math.pi / 180
R_T_D = 180 / math.pi
L = 0
R = 1


class Brain_Param(object):
    def __init__(self,
                 l1=leg_._UPPER_LEG_LEN,
                 l2=leg_._LOWER_SHORT_LEG_LEN,
                 gait_peroid=0.3,
                 gait_alfa=0.5,
                 gait_height=0.3,
                 limit_spd=1.0,
                 limit_rad=0.5,
                 mess=1.0,

                 en_ground=False
                 ):
        # commond
        self.mstate = 0
        self.switch_flag = 0
        self.control_mode = ['MOTOR_POS', 'MOTOR_POS', 'MOTOR_POS', 'MOTOR_POS']
        self.timer = np.zeros(10)
        self.exp_spd_b = np.zeros(3)
        self.exp_att = np.zeros(3)
        self.exp_pos_n = np.zeros(3)
        self.tar_spd_use = np.zeros(2)
        # state
        self.ground_flag = np.zeros((2, 4))
        self.ground_force = np.zeros(4)
        self.spd_b = np.zeros(3)
        self.spd_n = np.zeros(3)
        self.att = np.zeros(3)
        self.rate = np.zeros(3)
        self.pos_n = np.zeros(3)
        self.ground_num = 4
        # param
        self.gait_peroid = gait_peroid
        self.gait_alfa = gait_alfa
        self.gait_st = gait_peroid * gait_alfa
        self.gait_sw = gait_peroid * (1 - gait_alfa)

        self.gait_height = gait_height
        self.limit_spd = limit_spd
        self.limit_rad = limit_rad
        self.mess = mess

        self.en_ground = en_ground
        # control
        self.control_pid= [0, 0, 0]
        self.height_control_r = 0

    def state_est(self, leg1=Leg_Param, leg2=Leg_Param, leg3=Leg_Param, leg4=Leg_Param, dt=0):
        self.ground_num = leg1.ground_state + leg2.ground_state + leg3.ground_state + leg4.ground_state
        temp_z = math.fabs(
            leg1.pos_est[1] * leg1.ground_state + leg2.pos_est[1] * leg2.ground_state + leg3.pos_est[
                1] * leg3.ground_state + leg4.pos_est[1] * leg4.ground_state) / self.ground_num

        self.pos_n[2] =self.LPF(temp_z, self.pos_n[2], 10, dt)

    def LPF(self, input, input_flt, cutoff_freq, dt):
        input_reg = input
        if cutoff_freq <= 0.0 or dt <= 0.0:
            return input_reg

        rc = 1.0 / (2 * 3.14 * cutoff_freq)
        alpha = dt / (dt + rc)
        if alpha > 1:
            alpha = 1
        elif alpha < 0:
            alpha = 0
        out = input_flt + (input_reg - input_flt) * alpha
        return out

    def to_180(self, x):
        temp = x
        if x > 180:
            temp = x - 360
        else:
            if x < -180:
                temp = x + 180
            else:
                temp = x
        return temp

    def limit(self, input, min, max):
        out = 0
        if input > max:
            out = max
        elif input < min:
            out = min
        else:
            out = input
        return out

    def att_control(self, dt, leg1=Leg_Param, leg2=Leg_Param, leg3=Leg_Param, leg4=Leg_Param):
        err_roll = 0 - self.att[1]

        out_roll = err_roll * 0.0
        # print('self.pos_n[2]',self.pos_n[2])
        err_z = self.limit(0.2 - self.pos_n[2], -leg1.MAX_L * 0.86, leg1.MAX_L * 0.86)
        force_kp = self.limit(55 + math.fabs(math.sqrt(err_z ** 2)) * 400, 0, 66)
        force_kd = 600

        out_height = err_z * force_kp + (err_z - self.height_control_r) * force_kd
        self.height_control_r = err_z

        leg1.force_cmd[0] = out_roll + out_height
        leg2.force_cmd[0] = out_roll + out_height
        leg3.force_cmd[0] = out_roll + out_height
        leg4.force_cmd[0] = out_roll + out_height

    def spd_control(self, dt, leg1=Leg_Param, leg2=Leg_Param, leg3=Leg_Param, leg4=Leg_Param):
        err_yaw_spd = self.limit((30 - self.rate[2]) * R_T_D, -66, 66)
        self.exp_spd_b[2] = err_yaw_spd * 0
        out_pid_yaw = self.exp_spd_b[2] * 0.001

        self.tar_spd_use[L] = self.LPF(self.limit(self.exp_spd_b[1] + out_pid_yaw, -0.8, 0.8), self.tar_spd_use[L],
                                       0.25, dt)
        self.tar_spd_use[R] = self.LPF(self.limit(self.exp_spd_b[1] - out_pid_yaw, -0.8, 0.8), self.tar_spd_use[R],
                                       0.25, dt)

        self.exp_att[0] = -self.exp_spd_b[1] * 25
        self.exp_att[1] = 0
        self.exp_pos_n[2] = 0.2

        leg1.spd_cmd[0] = self.tar_spd_use[L]
        leg2.spd_cmd[0] = self.tar_spd_use[L]
        leg3.spd_cmd[0] = self.tar_spd_use[R]
        leg4.spd_cmd[0] = self.tar_spd_use[R]

        return 0

    def vmc_control_each_leg(self, leg=Leg_Param, dt=0):
        leg.force_int[0] += dt * 2

        tar_spd =  leg.spd_cmd[0]
        est_spd = -leg.spd_est[0]
        exp_pitch = self.exp_att[0]
        exp_roll  = self.exp_att[1]
        exp_height = -self.exp_pos_n[2] #+ math.sin(leg.force_int[0]) * 0.035 * 0
        pid_roll = (exp_roll - self.att[1]) * leg.flag_rl * 0.005 - (0 - self.rate[1]) * leg.flag_rl * 0.005
        pid_pitch = (exp_pitch + self.att[0]) * leg.flag_fb * 0.0025 - (0 + self.rate[0]) * leg.flag_fb * 0.0025
        leg.pos_cmd[1] = exp_height + pid_pitch * 1 + pid_roll * 1

        err_y = -leg.limit(tar_spd - est_spd, -leg.MAX_X * 0.86, leg.MAX_X * 0.86)
        err_z = leg.limit(leg.pos_cmd[1] - leg.pos_est[1], -leg.MAX_L * 0.86, leg.MAX_L * 0.86)
        force_kp = [0, 0]
        force_kd = [0, 0]
        force_kp[0] = 100
        force_kp[1] = self.limit(80 + math.fabs(math.sqrt(err_z ** 2)) * 400, 0, 100)
        force_kd[0] = 300
        force_kd[1] = 600

        force_y = err_y * force_kp[0] + (err_y - leg.pos_ctrl_r[0]) * force_kd[0]
        force_z = err_z * force_kp[1] + (err_z - leg.pos_ctrl_r[1]) * force_kd[1]

        leg.force_cmd[1] = -force_y
        leg.force_cmd[0] = force_z

        leg.pos_ctrl_r[0] = err_y
        leg.pos_ctrl_r[1] = err_z

        if leg.id == 3 and 0:
            print('ID_pos_angle: ', leg.id, ' <--------------------------------')
            print('KP: ', force_kp[0], force_kp[1], 'pos_cmd: ', leg.pos_cmd, ' pos_fb: ', leg.pos_est)
            print('v_force: ', force_y, force_z)
        return 0
