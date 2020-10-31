import pyqtgraph as pg
import numpy as np
import array

class Plot(object):
    def __init__(self):
        self.app = pg.mkQApp()  # 建立app
        self.win = pg.GraphicsWindow()  # 建立窗口
        self.win.resize(500, 500)  # 小窗口大小
        self.data1 = array.array('d')  # 可动态改变数组的大小,double型数组
        self.data2 = array.array('d')  # 可动态改变数组的大小,double型数组
        self.data3 = array.array('d')  # 可动态改变数组的大小,double型数组
        self.data4 = array.array('d')  # 可动态改变数组的大小,
        self.data5 = array.array('d')  # 可动态改变数组的大小,double型数组
        self.data6 = array.array('d')  # 可动态改变数组的大小,double型数组
        self.data7 = array.array('d')  # 可动态改变数组的大小,double型数组
        self.data8 = array.array('d')  # 可动态改变数组的大小,double型数组
        self.historyLength = 300  # 横坐标长度
        self.limit_y = 0 * 0.25
        self.p = self.win.addPlot()  # 把图p加入到窗口中
        self.p.showGrid(x=True, y=True)  # 把X和Y的表格打开
        if self.limit_y > 0:
            self.p.setRange(xRange=[0, self.historyLength], yRange=[-self.limit_y, self.limit_y], padding=0)
        else:
            self.p.setRange(xRange=[0, self.historyLength], padding=0)
        self.p.setLabel(axis='left', text='y / V')  # 靠左
        self.p.setLabel(axis='bottom', text='x / point')
        color = ['b', 'g', 'r', 'c', 'm', 'y', 'k', 'w']
        self.curve1 = self.p.plot(pen=color[0])
        self.curve2 = self.p.plot(pen=color[1])
        self.curve3 = self.p.plot(pen=color[2])
        self.curve4 = self.p.plot(pen=color[3])
        self.curve5 = self.p.plot(pen=color[4])
        self.curve6 = self.p.plot(pen=color[5])
        self.curve7 = self.p.plot(pen=color[6])
        self.curve8 = self.p.plot(pen=color[7])
        self.draw_data = np.zeros(8)

    def plot_thread(self):
        # 1
        tmp = self.draw_data[0]
        if len(self.data1) < self.historyLength:
          self.data1.append(tmp)
        else:
          self.data1[:-1] = self.data1[1:]  # 前移
          self.data1[-1] = tmp
        self.curve1.setData(self.data1)
        # 2
        tmp = self.draw_data[1]
        if len(self.data2) < self.historyLength:
          self.data2.append(tmp)
        else:
          self.data2[:-1] = self.data2[1:]  # 前移
          self.data2[-1] = tmp
        self.curve2.setData(self.data2)
        # 3
        tmp = self.draw_data[2]
        if len(self.data3) < self.historyLength:
          self.data3.append(tmp)
        else:
          self.data3[:-1] = self.data3[1:]  # 前移
          self.data3[-1] = tmp
        self.curve3.setData(self.data3)

        # 4
        tmp = self.draw_data[3]
        if len(self.data4) < self.historyLength:
          self.data4.append(tmp)
        else:
          self.data4[:-1] = self.data4[1:]  # 前移
          self.data4[-1] = tmp
        self.curve4.setData(self.data4)

        # 5
        tmp = self.draw_data[4]
        if len(self.data5) < self.historyLength:
          self.data5.append(tmp)
        else:
          self.data5[:-1] = self.data5[1:]  # 前移
          self.data5[-1] = tmp
        self.curve5.setData(self.data5)

        # 6
        tmp = self.draw_data[5]
        if len(self.data6) < self.historyLength:
          self.data6.append(tmp)
        else:
          self.data6[:-1] = self.data6[1:]  # 前移
          self.data6[-1] = tmp
        self.curve6.setData(self.data6)