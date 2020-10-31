"""A Raibert style controller for Minitaur."""

import collections
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
        self.MIN_Z = -(math.cos(40 * D_T_R) * l2 - math.cos(60 * D_T_R) * l1)
        self.MAX_Z = -(math.sin(55 * D_T_R) * l1 + math.sin(55 * D_T_R) * l2)
        self.MIN_X = -l1 * 1.15
        self.MAX_X = l1 * 1.15
        self.MAX_L = self.MIN_Z - self.MAX_Z
        self.leg_up_z = self.MAX_L*0.8
        self.m_angle = [90, 90]
        self.m_angle_spd = [0, 0]
        self.m_angle_cmd = [90, 90]
        self.m_torque_cmd = [0, 0]
        self.m_torque_est = [0, 0]
        self.damp_sita = [0, 0]
        self.damp_r = 0.5
        self.pos_est = [0, 0]
        self.pos_est_r = [0, 0]
        self.pos_cmd = [0, 0]
        self.spd_est = [0, 0]
        self.spd_cmd = [0, 0]
        self.force_cmd = [0, 0]
        self.force_est = [0, 0]
        self.jacobi_b = np.zeros((2, 2))
        self.jacobi_n = np.zeros((2, 2))
        self.pos_lim = [0, 0]
        self.m_kp = m_kp
        self.m_kd = m_kd
        self.torque_flag = torque_flag

        # swing trajectory
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

    def mangle_to_epose(self, pitch):  # zheng jie
        """The forward kinematics."""
        l1 = self.l1
        l2 = self.l2
        s1 = self.to_180(self.m_angle[1] - 90)
        s2 = 270 - self.m_angle[0]
        self.damp_r = l1 * math.cos(D_T_R * (s2 / 2 - s1 / 2)) + math.sqrt(
            l2 * l2 - l1 * l1 * math.sin(D_T_R * (s2 / 2 - s1 / 2)) ** 2)
        self.damp_sita[0] = self.to_180(90 - (s2 / 2 + s1 / 2) + self.limit(pitch, -60, 60))
        y = math.sin(D_T_R * self.damp_sita[0]) * self.damp_r
        z = -math.cos(D_T_R * self.damp_sita[0]) * self.damp_r

        if self.id == 3 and 0:
            print('ID: ', self.id)
            print('self.m_angle: ', self.m_angle)
            # print('s2,s1: ', s2,s1)
            # print('damp_sita: ',self.damp_sita,' damp_r: ',self.damp_r)
            print('epos: ', y, z)

        self.pos_est[0] = y
        self.pos_est[1] = z
        return (y, z)

    def epose_to_mangle(self, y, z):  # ni jie
        """The inverse kinematics."""
        l1 = self.l1
        l2 = self.l2
        damp_r = math.sqrt(y ** 2 + z ** 2)
        damp_sita = math.atan(y / (-z + 0.001)) * R_T_D
        s1 = 90 - (damp_sita) - math.acos((damp_r ** 2 + l1 ** 2 - l2 ** 2) / (2 * l1 * damp_r+0.00001)) * R_T_D
        s2 = 90 - (damp_sita) + math.acos((damp_r ** 2 + l1 ** 2 - l2 ** 2) / (2 * l1 * damp_r+0.00001)) * R_T_D
        m0 = 270 - s2
        m1 = s1 + 90
        if self.id == 3 and 0:
            print('ID_pos_angle: ', self.id, ' <--------------------------------')
            # print('damp_sita: ',damp_sita,' damp_r: ',damp_r)
            # print('s2, s1: ',s2 ,s1)
            print('m0: ', m0, self.m_angle[0], 'm1: ', m1, self.m_angle[1])

        return (m0, m1)

    def cal_jacobi(self, pitch):
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
        return 0

    def vmc_control_test(self, dt):
        self.force_int[0] = self.force_int[0] + dt * 0.005
        self.force_int[1] = math.sin(self.force_int[0]) * 0.03

        err_y = self.limit(-0.0 - self.pos_est[0], -self.MAX_X * 0.86, self.MAX_X * 0.86)
        self.pos_cmd[1] = -0.2 + self.force_int[1] * 0
        err_z = self.limit(self.pos_cmd[1] - self.pos_est[1], -self.MAX_L * 0.86, self.MAX_L * 0.86)
        force_kp = [0, 0]
        force_kp[0] = self.limit(40 + math.fabs(math.sqrt(err_y ** 2)) * 400, 0, 66)
        force_kp[1] = self.limit(40 + math.fabs(math.sqrt(err_z ** 2)) * 400, 0, 66)
        force_kd = 600

        force_y = err_y * force_kp[0] + (err_y - self.pos_est_r[0]) * force_kd
        force_z = err_z * force_kp[1] + (err_z - self.pos_est_r[1]) * force_kd

        self.force_cmd[1] = -force_y
        self.force_cmd[0] = force_z

        self.pos_est_r[0] = err_y
        self.pos_est_r[1] = err_z

        if self.id == 3 and 0:
            print('ID_pos_angle: ', self.id, ' <--------------------------------')
            print('KP: ', force_kp[0], force_kp[1], 'pos_cmd: ', self.pos_cmd, ' pos_fb: ', self.pos_est)
            print('v_force: ', force_y, force_z)
        return 0

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

    def trig_curve(self, dt):
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
                    #print('s', self.ground_state, self.use_ground_sensor)
                else:
                    self.trig_state = 1  # to extend
        # ------------------------------------
        elif self.trig_state == 0:  # extend
            return 1

        if self.pos_cmd[1]< self.MIN_Z*1.2:
            (self.m_angle_cmd[0], self.m_angle_cmd[1]) = self.epose_to_mangle(self.pos_cmd[0], self.pos_cmd[1])
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
        if self.m_angle_cmd[0] > 160:
            self.m_angle_cmd[0] = 160
        if self.m_angle_cmd[0] < 0:
            self.m_angle_cmd[0] = 0

        if self.m_angle_cmd[1] > 160:
            self.m_angle_cmd[1] = 160
        if self.m_angle_cmd[1] < 0:
            self.m_angle_cmd[1] = 0
        err[0] = self.to_180(self.m_angle_cmd[0] - self.m_angle[0]) * D_T_R
        err[1] = self.to_180(self.m_angle_cmd[1] - self.m_angle[1]) * D_T_R
        torque[0] = err[0] * self.m_kp - self.m_angle_spd[0] * self.m_kd * D_T_R
        torque[1] = err[1] * self.m_kp - self.m_angle_spd[1] * self.m_kd * D_T_R

        # torque[0] = torque[0]*self.torque_flag[0]
        # torque[1] = torque[1]*self.torque_flag[1]
        if self.id == 3 and 0:
            print('ID_pos_angle: ', self.id, ' <--------------------------------')
            print('m_torque_cmd: ', torque[0], torque[1])

        return (torque[0], torque[1])


class Brain_Param(object):
    def __init__(self,
                 l1=_LOWER_SHORT_LEG_LEN,
                 l2=_LOWER_LONG_LEG_LEN,
                 gait_peroid=0.35,
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
        # state
        self.ground_flag = np.zeros((2, 4))
        self.ground_force = np.zeros(4)
        self.spd_b = np.zeros(3)
        self.spd_n = np.zeros(3)
        self.att = np.zeros(3)
        self.rate = np.zeros(3)
        self.pos_n = np.zeros(3)
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


class BehaviorParameters(
    collections.namedtuple("BehaviorParameters", [
        "stance_duration", "desired_forward_speed", "turning_speed", "standing_height",
        "desired_incline_angle"
    ])):
    __slots__ = ()

    def __new__(cls,
                stance_duration=0.38 / 2,
                desired_forward_speed=0.0,
                turning_speed=0,
                standing_height=0.21,
                desired_incline_angle=0):
        return super(BehaviorParameters,
                     cls).__new__(cls, stance_duration, desired_forward_speed, turning_speed,
                                  standing_height, desired_incline_angle)


def motor_angles_to_leg_pose(motor_angles):
    leg_pose = np.zeros(_NUM_MOTORS)
    for i in range(_NUM_LEGS):
        leg_pose[i] = 0.5 * (-1) ** (i // 2) * (motor_angles[2 * i + 1] - motor_angles[2 * i])
        leg_pose[_NUM_LEGS + i] = 0.5 * (motor_angles[2 * i] + motor_angles[2 * i + 1])
    return leg_pose


def leg_pose_to_motor_angles(leg_pose):
    motor_pose = np.zeros(_NUM_MOTORS)
    for i in range(_NUM_LEGS):
        motor_pose[2 * i] = leg_pose[_NUM_LEGS + i] - (-1) ** (i // 2) * leg_pose[i]
        motor_pose[2 * i + 1] = (leg_pose[_NUM_LEGS + i] + (-1) ** (i // 2) * leg_pose[i])
    return motor_pose


def leg_pose_to_foot_position(leg_pose):
    """The forward kinematics."""
    l1 = _UPPER_LEG_LEN
    l2 = _LOWER_SHORT_LEG_LEN
    l3 = _LOWER_LONG_LEG_LEN

    ext = leg_pose[1]
    alpha = math.asin(l1 * math.sin(ext) / l2)

    sw = leg_pose[0]
    x = l3 * math.sin(alpha + sw) - l1 * math.sin(ext + sw)
    y = l3 * math.cos(alpha + sw) - l1 * math.cos(ext + sw)

    return (x, -y)


def foot_position_to_leg_pose(foot_position):
    """The inverse kinematics."""
    l1 = _UPPER_LEG_LEN
    l2 = _LOWER_SHORT_LEG_LEN
    l3 = _LOWER_LONG_LEG_LEN

    x = foot_position[0]
    y = foot_position[1]
    assert (y < 0)
    hip_toe_sqr = x ** 2 + y ** 2
    cos_beta = (l1 * l1 + l3 * l3 - hip_toe_sqr) / (2 * l1 * l3)
    hip_ankle_sqr = l1 * l1 + l2 * l2 - 2 * l1 * l2 * cos_beta
    hip_ankle = math.sqrt(hip_ankle_sqr)
    cos_ext = -(l1 * l1 + hip_ankle_sqr - l2 * l2) / (2 * l1 * hip_ankle)
    ext = math.acos(cos_ext)

    hip_toe = math.sqrt(hip_toe_sqr)
    cos_theta = (hip_toe_sqr + hip_ankle_sqr - (l3 - l2) ** 2) / (2 * hip_ankle * hip_toe)

    assert cos_theta > 0
    theta = math.acos(cos_theta)
    sw = math.asin(x / hip_toe) - theta
    return (-sw, ext)


def foot_horizontal_position_to_leg_swing(foot_horizontal_position, leg_extension):
    """Computes the target leg swing.

  Sometimes it is more convenient to plan in the hybrid space.
  """

    l1 = _UPPER_LEG_LEN
    l2 = _LOWER_SHORT_LEG_LEN
    l3 = _LOWER_LONG_LEG_LEN
    ext = leg_extension
    alpha = math.asin(l1 / l2 * math.sin(ext))

    toe_hip_orth = l3 * math.sin(alpha) - l1 * math.sin(ext)
    toe_hip_proj = l3 * math.cos(alpha) - l1 * math.cos(ext)

    theta = math.atan(toe_hip_orth / toe_hip_proj)

    # We may allow theta < 0 for backward foot location.
    # assert theta > 0

    toe_hip_len = math.sqrt(toe_hip_orth ** 2 + toe_hip_proj ** 2)

    # Cap the foot horizontal (projected) position so the target leg pose is
    # always feasible.
    foot_position = max(min(toe_hip_len * 0.8, foot_horizontal_position), -toe_hip_len * 0.5)

    sw_and_theta = math.asin(foot_position / toe_hip_len)

    sw = sw_and_theta - theta

    # TODO(tingnan): Fix the sign bug.
    return -sw


def extension_to_ankle_dist(ext):
    l1 = _UPPER_LEG_LEN
    l2 = _LOWER_SHORT_LEG_LEN
    l3 = _LOWER_LONG_LEG_LEN
    alpha = math.asin(l1 / l2 * math.sin(ext))
    return l2 * math.cos(alpha) - l1 * math.cos(ext)


def ankle_dist_to_extension(dist):
    l1 = _UPPER_LEG_LEN
    l2 = _LOWER_SHORT_LEG_LEN
    l3 = _LOWER_LONG_LEG_LEN
    cos_ext = -(l1 ** 2 + dist ** 2 - l2 ** 2) / (2 * l1 * dist)
    return math.acos(cos_ext)


def generate_swing_trajectory(phase, init_pose, end_pose):
    # Try phase compression
    normalized_phase = math.sqrt(min(phase * 1.5, 1))

    # For swing, we use a linear interpolation:
    sw = (end_pose[0] - init_pose[0]) * normalized_phase + init_pose[0]

    # For extension, we can fit a second order polynomial:
    min_ext = (init_pose[1] + end_pose[1]) / 2 - 0.8
    min_ext = max(min_ext, 0.5)
    phi = 0.7

    min_delta = extension_to_ankle_dist(min_ext)
    init_delta = extension_to_ankle_dist(init_pose[1])
    end_delta = extension_to_ankle_dist(end_pose[1])

    # The polynomial is: a * phi^2 + b * phi + c
    delta_1 = min_delta - init_delta
    delta_2 = end_delta - init_delta
    delta_p = phi * phi - phi

    a = (delta_1 - phi * delta_2) / delta_p

    b = (phi * phi * delta_2 - delta_1) / delta_p

    delta = (a * normalized_phase * normalized_phase + b * normalized_phase + init_delta)

    l1 = _UPPER_LEG_LEN
    l2 = _LOWER_SHORT_LEG_LEN

    delta = min(max(delta, l2 - l1 + 0.01), l2 + l1 - 0.01)

    ext = ankle_dist_to_extension(delta)

    return (sw, ext)


def generate_stance_trajectory(phase, init_pose, end_pose):
    normalized_phase = math.sqrt(phase)
    sw = (end_pose[0] - init_pose[0]) * normalized_phase + init_pose[0]
    ext = end_pose[1]
    return (sw, ext)


class RaibertSwingLegController(object):

    def __init__(self,
                 speed_gain=0.05,
                 leg_extension_clearance=0.3,
                 leg_trajectory_generator=generate_swing_trajectory):
        self._speed_gain = speed_gain
        self._leg_extension_clearance = leg_extension_clearance
        self._leg_trajectory_generator = leg_trajectory_generator

    def get_action(self, raibiert_controller):
        current_speed = raibiert_controller.estimate_base_velocity()
        phase = raibiert_controller.get_phase()

        leg_pose_set = []
        for i in raibiert_controller.swing_set:
            target_foot_horizontal_position = (
                    raibiert_controller.behavior_parameters.stance_duration / 2 * current_speed +
                    self._speed_gain *
                    (current_speed - raibiert_controller.behavior_parameters.desired_forward_speed))

            # Use the swing phase [0, 1] to track the foot. The idea is
            # straightforward:
            # 1) Calculate the target swing and leg extension based on target foot position.
            # 2) Generate a smooth Bezier curve between current leg pose and target pose
            # 3) Find the next leg pose on the curve based on how much time left.

            # 1) Convert the target foot
            target_leg_extension = (raibiert_controller.nominal_leg_extension -
                                    self._leg_extension_clearance)
            target_leg_swing = foot_horizontal_position_to_leg_swing(target_foot_horizontal_position,
                                                                     leg_extension=target_leg_extension)

            target_leg_pose = (target_leg_swing, target_leg_extension)

            # 2) Generates the curve from the current leg pose to the target leg pose.
            # and Find the next leg pose on the curve based on current swing phase.

            desired_leg_pose = self._leg_trajectory_generator(phase,
                                                              raibiert_controller.swing_start_leg_pose,
                                                              target_leg_pose)

            leg_pose_set.append(desired_leg_pose)

        # 3) adjust the pose with a feedback term to maintain leg height

        return leg_pose_set


class RaibertStanceLegController(object):

    def __init__(self, speed_gain=0.5, leg_trajectory_generator=generate_stance_trajectory):
        self._speed_gain = speed_gain
        self._leg_trajectory_generator = leg_trajectory_generator

    def get_action(self, raibiert_controller):
        phase = raibiert_controller.get_phase()
        current_speed = raibiert_controller.estimate_base_velocity()
        leg_pose_set = []
        for i in raibiert_controller.stance_set:
            desired_forward_speed = (raibiert_controller.behavior_parameters.desired_forward_speed)
            target_foot_position = -(raibiert_controller.behavior_parameters.stance_duration / 2 *
                                     current_speed - self._speed_gain *
                                     (current_speed - desired_forward_speed))

            target_leg_pose = (foot_horizontal_position_to_leg_swing(
                target_foot_position, leg_extension=raibiert_controller.nominal_leg_extension),
                               raibiert_controller.nominal_leg_extension)

            desired_leg_pose = self._leg_trajectory_generator(phase,
                                                              raibiert_controller.stance_start_leg_pose,
                                                              target_leg_pose)

            leg_pose_set.append(desired_leg_pose)

        return leg_pose_set


class MinitaurRaibertTrottingController(object):
    """A Raibert style controller for trotting gait."""

    def __init__(self,
                 robot,
                 behavior_parameters=BehaviorParameters(),
                 swing_leg_controller=RaibertSwingLegController(),
                 stance_leg_controller=RaibertStanceLegController(),
                 pose_feedback_controller=None):
        self._time = 0
        self._robot = robot
        self._behavior_parameters = behavior_parameters

        nominal_leg_pose = foot_position_to_leg_pose((0, -self._behavior_parameters.standing_height))
        self._nominal_leg_extension = nominal_leg_pose[1]

        self._swing_leg_controller = swing_leg_controller
        self._stance_leg_controller = stance_leg_controller
        self._pose_feeback_controller = pose_feedback_controller

        # The leg order is FL, RL, FR, RR -> [0, 1, 2, 3]
        self._swing_set = DIAGONAL_LEG_PAIR_1
        self._stance_set = DIAGONAL_LEG_PAIR_2
        self._swing_start_leg_pose = self.get_swing_leg_pose()
        self._stance_start_leg_pose = self.get_stance_leg_pose()

    @property
    def behavior_parameters(self):
        return self._behavior_parameters

    @behavior_parameters.setter
    def behavior_parameters(self, behavior_parameters):
        self._behavior_parameters = behavior_parameters

    @property
    def nominal_leg_extension(self):
        return self._nominal_leg_extension

    @property
    def swing_set(self):
        return self._swing_set

    @property
    def stance_set(self):
        return self._stance_set

    @property
    def swing_start_leg_pose(self):
        return self._swing_start_leg_pose

    @property
    def stance_start_leg_pose(self):
        return self._stance_start_leg_pose

    def _get_average_leg_pose(self, leg_indices):
        """Get the average leg pose."""
        current_leg_pose = motor_angles_to_leg_pose(self._robot.GetMotorAngles())

        # extract the swing leg pose from the current_leg_pose
        leg_pose = []
        for index in leg_indices:
            leg_pose.append([current_leg_pose[index], current_leg_pose[index + _NUM_LEGS]])

        leg_pose = np.array(leg_pose)
        return np.mean(leg_pose, axis=0)

    def get_swing_leg_pose(self):
        """Get the current swing legs' average pose."""
        return self._get_average_leg_pose(self._swing_set)

    def get_stance_leg_pose(self):
        """Get the current stance legs' average pose."""
        return self._get_average_leg_pose(self._stance_set)

    def get_phase(self):
        """Compute the current stance/swing phase."""
        return math.fmod(
            self._time,
            self._behavior_parameters.stance_duration) / self._behavior_parameters.stance_duration

    def update_swing_stance_set(self):
        """Switch the set of swing/stance legs based on timing."""
        swing_stance_phase = math.fmod(self._time, 2 * self._behavior_parameters.stance_duration)
        if swing_stance_phase < self._behavior_parameters.stance_duration:
            return (DIAGONAL_LEG_PAIR_1, DIAGONAL_LEG_PAIR_2)
        return (DIAGONAL_LEG_PAIR_2, DIAGONAL_LEG_PAIR_1)

    def update(self, t):
        self._time = t
        new_swing_set, new_stance_set = self.update_swing_stance_set()

        # If there is a stance/swing switch.
        if new_swing_set[0] is not self._swing_set[0]:
            self._swing_set = new_swing_set
            self._stance_set = new_stance_set

            # Also records the starting pose.
            self._swing_start_leg_pose = self.get_swing_leg_pose()
            self._stance_start_leg_pose = self.get_stance_leg_pose()

    def estimate_base_velocity(self):
        # TODO(tingnan): consider using a sensor fusion.
        stance_leg_pose = self.get_stance_leg_pose()

        delta_sw = stance_leg_pose[0] - self._stance_start_leg_pose[0]

        x, y = leg_pose_to_foot_position(stance_leg_pose)
        toe_hip_len = math.sqrt(x ** 2 + y ** 2)
        horizontal_dist = toe_hip_len * delta_sw
        phase = self.get_phase()
        speed = 0 if phase < 0.1 else horizontal_dist / (self._behavior_parameters.stance_duration *
                                                         phase)
        return speed

    def get_swing_leg_action(self):
        return self._swing_leg_controller.get_action(self)

    def get_stance_leg_action(self):
        return self._stance_leg_controller.get_action(self)

    def set_motor_angles_test(self, m1=90, m2=90, m3=90, m4=90, m5=90, m6=90, m7=90, m8=90):
        motor_pose = np.zeros(_NUM_MOTORS)
        motor_pose[0] = m1
        motor_pose[1] = m2
        motor_pose[2] = m3
        motor_pose[3] = m4
        motor_pose[4] = m5
        motor_pose[5] = m6
        motor_pose[6] = m7
        motor_pose[7] = m8
        return motor_pose / 57.3

    def get_action(self):
        leg_pose = [0] * _NUM_MOTORS
        swing_leg_pose = self.get_swing_leg_action()
        j = 0
        for i in self._swing_set:
            leg_pose[i] = swing_leg_pose[j][0]
            leg_pose[i + _NUM_LEGS] = swing_leg_pose[j][1]
            j += 1

        stance_leg_pose = self.get_stance_leg_action()
        j = 0
        for i in self._stance_set:
            leg_pose[i] = stance_leg_pose[j][0]
            leg_pose[i + _NUM_LEGS] = stance_leg_pose[j][1]
            j += 1

        return leg_pose_to_motor_angles(leg_pose)
