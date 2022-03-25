import pyqtgraph as pg
import numpy as np
import array
import threading
import matplotlib.pyplot as plt
import time
from matplotlib import animation

class Data_Gui(object):
  def __init__(self):

    '''
    self.app=pg.mkQApp()  # 建立app
    self.win = pg.GraphicsWindow()  # 建立窗口
    self.win.setWindowTitle(u'Drawing')
    self.win.resize(800, 500)  # 小窗口大小

    self.data = array.array('d')  # 可动态改变数组的大小,double型数组
    self.historyLength = 100  # 横坐标长度
    # 绘制一个图形
    self.idx = 0
    self.p = self.win.addPlot()  # 把图p加入到窗口中
    self.p.showGrid(x=True, y=True)  # 把X和Y的表格打开
    self.p.setRange(xRange=[0, self.historyLength], yRange=[-1.2, 1.2], padding=0)
    self.p.setLabel(axis='left', text='y / V')  # 靠左
    self.p.setLabel(axis='bottom', text='x / point')
    self.p.setTitle('y = sin(x)')  # 表格的名字
    self.curve = self.p.plot()
  '''
    self.data_buf = 0
    plt.grid(True)  # 添加网格
    plt.ion()  # interactive mode
    plt.figure(1)
    plt.xlabel('times')
    plt.ylabel('data')
    plt.title('Diagram of UART data by Python')

    self.t = [0]
    self.t_now = 0
    self.m = [0]
    plt.clf()  # 清空画布上的所有内容
    print('Init GUI Done!')


  def plotData_1(self):
    #while 1:
      print('Thread2')
      self.t_now = self.t_now+1
      self.t.append(self.t_now)  # 模拟数据增量流入，保存历史数据
      self.m.append(self.data_buf)  # 模拟数据增量流入，保存历史数据
      plt.plot(self.t, self.m, '-r')
      plt.draw()  # 注意此函数需要调用
      #time.sleep(0.0001)
      #plt.pause(0.0000000000000001)
      #anim1 = animation.FuncAnimation(self.fig, animate, init_func=init, frames=len(XMat) - 10, interval=2)
      plt.show()


  def plotConfig(self):
    timer = pg.QtCore.QTimer()
    timer.timeout.connect(self.plotData_1)  # 定时调用plotData函数
    timer.start(50)  # 多少ms调用一次]
    print('T2')
    #self.app.exec_()


  def plotData(self):
    tmp= self.data_buf
    if len(self.data) < self.historyLength:
      self.data.append(tmp)
    else:
      self.data[:-1] = self.data[1:]  # 前移
      self.data[-1] = tmp
    self.curve.setData(self.data)
