import math
import numpy as np

_NUM_MOTORS = 8
_NUM_LEGS = 4

_UPPER_LEG_LEN = 0.112
_LOWER_SHORT_LEG_LEN = 0.199
_LOWER_LONG_LEG_LEN = 0.2315

DIAGONAL_LEG_PAIR_1 = (0, 3)
DIAGONAL_LEG_PAIR_2 = (1, 2)
D_T_R = math.pi / 180
R_T_D = 180 / math.pi
L = 0
R = 1

class Leg_Param(object):
    def __init__(self,
                 l1=_UPPER_LEG_LEN,
                 l2=_LOWER_SHORT_LEG_LEN,
                 m_kp=1,
                 m_kd=0.01,
                 id=0,
                 torque_flag=[1, 1]
                 ):
        self.id = id

        self.l1 = l1
        self.l2 = l2
        self.MIN_Z = -(math.cos(30 * D_T_R) * l2 - math.cos(45 * D_T_R) * l1)
        self.MAX_Z = -(math.sin(55 * D_T_R) * l1 + math.sin(55 * D_T_R) * l2)
        self.MIN_X = -l1 * 1.15
        self.MAX_X = l1 * 1.15
        self.MAX_L = math.fabs(self.MIN_Z - self.MAX_Z)
        self.COG_OFF = (_LOWER_LONG_LEG_LEN - _LOWER_SHORT_LEG_LEN) * math.sin(25 * D_T_R)
        self.leg_up_z = self.MAX_L * 0.8
        self.m_angle = [90, 90]
        self.m_angle_spd = [0, 0]
        self.m_angle_cmd = [90, 90]
        self.m_torque_cmd = [0, 0]
        self.m_torque_est = [0, 0]
        self.damp_sita = [0, 0]
        self.damp_r = 0.5
        self.pos_est = [0, 0]
        self.pos_est_r = [0, 0]
        self.pos_ctrl_r = [0, 0]
        self.pos_cmd = [0, 0]
        self.spd_est = [0, 0]
        self.spd_est1 = [0, 0]
        self.spd_cmd = [0, 0]
        self.force_cmd = [0, 0]
        self.force_est = [0, 0]
        self.jacobi_b = np.zeros((2, 2))
        self.inv_jacobi_b = np.zeros((2, 2))
        self.jacobi_n = np.zeros((2, 2))
        self.pos_lim = [0, 0]
        self.m_kp = m_kp
        self.m_kd = m_kd
        self.torque_flag = torque_flag
        self.control_pid = [0, 0, 0, 0]
        # swing trajectory
        self.kp_trig = [0.015, 2]
        self.time_trig = 0
        self.swing_time = 0
        self.trig_state = 0
        self.ground_state = 1
        self.use_ground_sensor = 0
        self.swing_pos_st = [0, 0, 0]
        self.swing_pos_ed = [0, 0, 0]
        self.swing_pos_now = [0, 0, 0]
        self.c0 = [0, 0, 0]
        self.c3 = [0, 0, 0]
        self.c4 = [0, 0, 0]
        self.c5 = [0, 0, 0]
        self.c6 = [0, 0, 0]
        # reg
        self.force_int = [0, 0]
        self.flag_rl = 'L'
        self.flag_fb = 'F'
        self.cog_off_hover = 0
        self.cnt_div = 0

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

    def mangle_to_epose(self, dt, pitch):  # forward compute
        l1 = self.l1
        l2 = self.l2
        s1 = self.to_180(self.m_angle[1] - 90)
        s2 = 270 - self.m_angle[0]
        self.damp_r = l1 * math.cos(D_T_R * (s2 / 2 - s1 / 2)) + math.sqrt(
            l2 * l2 - l1 * l1 * math.sin(D_T_R * (s2 / 2 - s1 / 2)) ** 2)
        self.damp_sita[0] = self.to_180(90 - (s2 / 2 + s1 / 2) + self.limit(pitch, -60, 60))
        assert (self.damp_r > 0)
        y = math.sin(D_T_R * self.damp_sita[0]) * self.damp_r
        z = -math.cos(D_T_R * self.damp_sita[0]) * self.damp_r

        if self.id == 3 and 0:
            print('ID: ', self.id)
            print('self.m_angle: ', self.m_angle)
            # print('s2,s1: ', s2,s1)
            # print('damp_sita: ',self.damp_sita,' damp_r: ',self.damp_r)
            print('epos: ', y, z)

        self.pos_est[0] = self.LPF(y, self.pos_est[0], 0, dt)
        self.pos_est[1] = self.LPF(z, self.pos_est[1], 0, dt)

        FLT_END_SPD = 6
        dy_d = (self.pos_est[0] - self.pos_est_r[0]) / (dt + 0.00001)
        dz_d = (self.pos_est[1] - self.pos_est_r[1]) / (dt + 0.00001)
        if self.ground_state == 1:
            self.spd_est[0] = self.LPF(dy_d, self.spd_est[0], FLT_END_SPD, dt)
            self.spd_est[1] = self.LPF(dz_d, self.spd_est[1], FLT_END_SPD, dt)

        self.pos_est_r[0] = self.pos_est[0]
        self.pos_est_r[1] = self.pos_est[1]
        return (y, z)

    def epose_to_mangle(self, pitch, y, z):  # invert kinematics
        l1 = self.l1
        l2 = self.l2
        damp_r = math.sqrt(y ** 2 + z ** 2)
        damp_sita = math.atan(y / (-z + 0.001)) * R_T_D
        s1 = 90 - (damp_sita) - math.acos((damp_r ** 2 + l1 ** 2 - l2 ** 2) / (2 * l1 * damp_r + 0.00001)) * R_T_D
        s2 = 90 - (damp_sita) + math.acos((damp_r ** 2 + l1 ** 2 - l2 ** 2) / (2 * l1 * damp_r + 0.00001)) * R_T_D
        m0 = 270 - s2 + self.limit(pitch, -60, 60)
        m1 = s1 + 90 + self.limit(-pitch, -60, 60)
        if self.id == 3 and 0:
            print('ID_pos_angle: ', self.id, ' <--------------------------------')
            # print('damp_sita: ',damp_sita,' damp_r: ',damp_r)
            # print('s2, s1: ',s2 ,s1)
            print('m0: ', m0, self.m_angle[0], 'm1: ', m1, self.m_angle[1])

        return (m0, m1)

    def cal_jacobi(self, dt, pitch):
        l1 = self.l1
        l2 = self.l2
        s1 = self.to_180(self.m_angle[1] - 90)
        s2 = 270 - self.m_angle[0]

        sita_add = self.to_180(90 - (s2 / 2 + s1 / 2) + self.limit(pitch, -60, 60)) * D_T_R
        sita_cut = (s2 / 2 - s1 / 2) * D_T_R
        r = self.damp_r

        sqrt_all = math.sqrt(l2 ** 2 - (l1 ** 2) * math.sin(sita_cut) ** 2)
        drs1 = 0.5 * l1 * math.sin(sita_cut) - 0.5 * l1 * l1 * math.sin(sita_cut) * math.cos(sita_cut) / sqrt_all
        drs2 = -0.5 * l1 * math.sin(sita_cut) + 0.5 * l1 * l1 * math.sin(sita_cut) * math.cos(sita_cut) / sqrt_all

        s1_dy = -math.cos(sita_add) * r + math.sin(sita_add) * drs1
        s2_dy = -math.cos(sita_add) * r + math.sin(sita_add) * drs2

        s1_dz = -math.sin(sita_add) * r - math.cos(sita_add) * drs1
        s2_dz = -math.sin(sita_add) * r - math.cos(sita_add) * drs2

        self.jacobi_b[0][0] = s1_dy
        self.jacobi_b[1][0] = s2_dy
        self.jacobi_b[0][1] = s1_dz
        self.jacobi_b[1][1] = s2_dz

        if self.id == 3 and 0:
            print('ID_pos_angle: ', self.id, ' <--------------------------------')
            print(self.jacobi_b)

        self.est_vmc_force(dt)
        return 0

    def est_vmc_force(self, dt):
        force = [0, 0]
        torque = [self.m_torque_est[0], self.m_torque_est[1]]
        det = self.jacobi_b[0][0] * self.jacobi_b[1][1] - self.jacobi_b[0][1] * self.jacobi_b[1][0]
        self.inv_jacobi_b[0][0] = self.jacobi_b[1][1] / det
        self.inv_jacobi_b[0][1] = -self.jacobi_b[0][1] / det
        self.inv_jacobi_b[1][0] = -self.jacobi_b[1][1] / det
        self.inv_jacobi_b[1][1] = self.jacobi_b[0][0] / det

        force[0] = self.inv_jacobi_b[0][0] * torque[0] + self.inv_jacobi_b[0][1] * torque[1]
        force[1] = self.inv_jacobi_b[1][0] * torque[0] + self.inv_jacobi_b[1][1] * torque[1]
        if self.id == 3 and 0:
            print('force est: ', force[0], force[1])
        FLT_END_FORCE = 25
        self.force_est[0] = self.LPF(force[0], self.force_est[0], FLT_END_FORCE, dt)
        self.force_est[1] = self.LPF(force[1], self.force_est[1], FLT_END_FORCE, dt)

    def reset_leg_controller(self):
        self.control_pid[0]=0
        self.control_pid[1]=0
        self.control_pid[2]=0
        self.control_pid[3]=0

    def cal_tar_end_pos(self, en_jacobi_pit=1, pitch=0, stance_time=0, body_z=0):
        tar_spd = self.spd_cmd[0]
        est_spd = -self.spd_est[0]
        temp_h = math.fabs(self.pos_est[1])
        cog_off = -self.COG_OFF  # * math.cos(pitch * D_T_R)

        att_off = -self.limit(math.tan(pitch * D_T_R) * temp_h, self.MIN_X * 0.8, self.MAX_X * 0.8)
        if en_jacobi_pit == 1 or en_jacobi_pit == -1:
            att_off = 0
        spd_off = self.kp_trig[0] * (tar_spd - est_spd)  # * math.sqrt(temp_h / 9.81)
        epos = [0, 0]
        epos[0] = self.limit(
            est_spd * stance_time + spd_off * 1 + cog_off,
            self.MIN_X, self.MAX_X) + att_off
        epos[1] = self.limit(self.pos_est[1], self.MAX_Z, self.MIN_Z)

        if self.id == 3 and 0:
            print('ID_pos_angle: ', self.id, ' <--------------------------------')
            print('epos_ed', epos[0], epos[1])
        return (epos[0], epos[1])

    def cal_curve_swing(self):
        t1 = self.swing_time / 2
        t2 = self.swing_time
        p0 = [0, 0, 0]
        p1 = [0, 0, 0]
        p2 = [0, 0, 0]
        # ----------start
        p0[0] = self.swing_pos_st[0]
        p0[1] = self.swing_pos_st[1]
        p0[2] = self.swing_pos_st[2]
        # -------------end
        p2[0] = self.swing_pos_ed[0]
        p2[1] = self.swing_pos_ed[1]
        p2[2] = self.swing_pos_ed[2]

        end_weight = 0.5
        p1[0] = p0[0] * (1 - end_weight) + p2[0] * end_weight
        p1[1] = (p0[1] + p2[1]) / 2
        p1[0] = self.limit(p1[0], (p0[0] + p2[0]) / 2 - 0.5 * self.MAX_X, (p0[0] + p2[0]) / 2 + 0.5 * self.MAX_X)
        p1[2] = self.limit((p0[2] + p2[2]) / 2 + self.leg_up_z, self.MAX_Z, self.MIN_Z)
        # p1[2] = self.MIN_Z

        p1_p0 = [0, 0, 0]
        p0_p2 = [0, 0, 0]
        for i in range(0, 3):
            self.c0[i] = p0[i]
            p1_p0[i] = p1[i] - p0[i]
            p0_p2[i] = p0[i] - p2[i]

        t1_3 = math.pow(t1, 3)
        t1_4 = math.pow(t1, 4)
        t1_5 = math.pow(t1, 5)
        t1_6 = math.pow(t1, 6)

        t2_2 = math.pow(t2, 2)
        t2_3 = math.pow(t2, 3)
        t2_5 = math.pow(t2, 5)
        t2_6 = math.pow(t2, 6)
        temp1 = 1 / (t1_3 * math.pow((t1 - t2), 3) * t2_3)
        for i in range(0, 3):
            self.c3[i] = -1 * temp1 * (t2_6 * (p1_p0[i]) + 5 * t1_4 * t2_2 * 3 * (p0_p2[i]) + 2 * t1_6 * 5 * (
                p0_p2[i]) - 3 * t1_5 * t2 * 8 * (p0_p2[i]))
            self.c4[i] = temp1 / t2 * (3 * t2_6 * (p1_p0[i]) + 15 * t1_3 * t2_3 * (p0_p2[i]) - 27 * t1_5 * t2 * (
                p0_p2[i]) + t1_6 * 15 * (p0_p2[i]))
            self.c5[i] = -temp1 / t2_2 * 3 * (
                    t2_6 * (p1_p0[i]) + 2 * t1_6 * (p0_p2[i]) + t1_3 * t2_3 * 8 * (p0_p2[i]) - t1_4 * t2_2 * 9 * (
                p0_p2[i]))
            self.c6[i] = temp1 / t2_2 * (
                    t2_5 * (p1_p0[i]) + 6 * t1_5 * (p0_p2[i]) + 10 * t1_3 * t2_2 * (p0_p2[i]) - t1_4 * t2 * 15 * (
                p0_p2[i]))

    def cal_pos_tar_from_curve(self):
        time_now = self.limit(self.time_trig, 0, self.swing_time)
        for i in range(0, 3):
            self.swing_pos_now[i] = self.c0[i] + self.c3[i] * pow(time_now, 3) + self.c4[i] * pow(time_now, 4) + \
                                    self.c5[i] * pow(time_now, 5) + self.c6[i] * pow(time_now, 6)
        return 0

    def trig_curve(self, pitch, dt):
        time_trig = self.limit(self.time_trig, 0, self.swing_time)
        if self.trig_state == 0:
            self.time_trig = self.time_trig + dt

            self.cal_pos_tar_from_curve()
            self.pos_cmd[0] = self.swing_pos_now[1]
            self.pos_cmd[1] = self.swing_pos_now[2]
            # print(self.pos_cmd,self.time_trig,self.swing_time,dt)
            if self.time_trig > self.swing_time and math.fabs(self.pos_cmd[1] - self.swing_pos_ed[2]) > 0.005:
                self.trig_state = 1
            elif self.time_trig > self.swing_time * 0.5 - dt and math.fabs(self.pos_cmd[1]) > math.fabs(
                    self.swing_pos_ed[2]):
                if self.use_ground_sensor == 0:
                    self.ground_state = 1
                    self.pos_cmd[1] = self.pos_est[1]
                    self.trig_state = 99
            elif self.time_trig > self.swing_time - dt:

                if self.use_ground_sensor == 0:
                    self.ground_state = 1
                    self.pos_cmd[1] = self.pos_est[1]
                    self.trig_state = 99
                    # print('s', self.ground_state, self.use_ground_sensor)
                else:
                    self.trig_state = 1  # to extend
        # ------------------------------------
        elif self.trig_state == 0:  # extend
            return 1

        if self.pos_cmd[1] < self.MIN_Z * 1.2:
            (self.m_angle_cmd[0], self.m_angle_cmd[1]) = self.epose_to_mangle(pitch, self.pos_cmd[0], self.pos_cmd[1])
        return 0

    def force_to_mtorque(self, force_y, force_z):
        torque = [0, 0]
        torque[0] = self.jacobi_b[0][0] * force_y + self.jacobi_b[0][1] * force_z
        torque[1] = self.jacobi_b[1][0] * force_y + self.jacobi_b[1][1] * force_z
        torque[0] = torque[0] * self.torque_flag[0]
        torque[1] = torque[1] * self.torque_flag[1]
        if self.id == 3 and 0:
            print('torque: ', torque[0], torque[1])
        return (torque[0], torque[1])

    def motor_pos_control(self):
        err = [0, 0]
        torque = [0, 0]
        if self.m_angle_cmd[0] > 170:
            self.m_angle_cmd[0] = 170
        if self.m_angle_cmd[0] < 0:
            self.m_angle_cmd[0] = 0

        if self.m_angle_cmd[1] > 170:
            self.m_angle_cmd[1] = 170
        if self.m_angle_cmd[1] < 0:
            self.m_angle_cmd[1] = 0
        err[0] = self.to_180(self.m_angle_cmd[0] - self.m_angle[0]) * D_T_R
        err[1] = self.to_180(self.m_angle_cmd[1] - self.m_angle[1]) * D_T_R
        torque[0] = err[0] * self.m_kp - self.m_angle_spd[0] * self.m_kd * D_T_R
        torque[1] = err[1] * self.m_kp - self.m_angle_spd[1] * self.m_kd * D_T_R

        if self.id == 3 and 0:
            print('ID_pos_angle: ', self.id, ' <--------------------------------')
            print('m_torque_cmd: ', torque[0], torque[1])

        return (torque[0], torque[1])

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

    def sign(self, input):
        if input > 0:
            return 1
        else:
            return -1