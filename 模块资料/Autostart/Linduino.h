//! @todo Review this file.
/*
Linduino.h

此文件包含Linduino的硬件定义

修订历史记录
修订版： 4637
日期： 2016-01-29 10：04：59 -0800 （星期五， 2016年1月29日）

版权所有 （c） 2013， 线性技术公司 （LTC）
保留所有权利。

在源和二进制窗体中重新分发和使用，有或没有
修改，只要满足以下条件， 允许：

1. 源代码的再分发必须保留上述版权声明，
条件列表和以下免责声明。
2. 二进制形式的再分发必须复制上述版权声明，
此条件列表和文档中的以下免责声明
和/或分配时提供的其他材料。


本软件由版权所有者和贡献者"按现在"提供，
任何明示或暗示的保证，包括但不限于默示的
为特定目的的可商户性和适用性保证是
否认。版权所有者或贡献者不承担任何责任。
任何直接、间接、附带、特殊、示范性或后果性损害
（包括但不限于采购替代货物或服务;
使用、数据或利润损失;或业务中断）但造成和
在任何责任理论，无论是合同，严格责任，或侵权
（包括疏忽或其他）以任何方式产生使用本
软件，即使被告知此类损坏的可能性。


软件和文档中的观点和结论是
作者，不应被解释为代表官方政策，
线性技术公司的明示或暗示。


线性技术林杜伊诺不隶属于官方的阿杜伊诺团队。
然而， 林杜伊诺只是可能的， 因为阿杜伊诺团队的承诺
开源社区。 请访问http://www.arduino.cc和
http://store.arduino.cc，并考虑购买，这将有助于资助他们的
正在进行的工作。

*/

//! 线性技术 Arduino 兼容演示板

/*! 文件
林杜伊诺
内组奎克瓦尔
林杜伊诺库和演示代码的标题文件
*/

#ifndef LINDUINO_H
#define LINDUINO_H

#include <Arduino.h>  // 包括 Arduino.h // typedefs 使用在此头文件中定义的类型。

//! 名称林杜伊诺引脚分配
//! @{

#define QUIKEVAL_GPIO 9          //!< 林杜伊诺 QuikEval Gpio 引脚 （QuikEval 连接器引脚 14） 连接到 Arduino 引脚 9
#define QUIKEVAL_CS SS           //!< QuikEval CS 引脚（QuikEval 连接器引脚 6 上的 SPI 芯片选择）连接到 Arduino SS 引脚。
#define QUIKEVAL_MUX_MODE_PIN 8  
/*!< QUIKEVAL_MUX_MODE_PIN定义 QuikEval MUX 的控制引脚。
I2C 端口 SCL 和 SPI 端口 SCK 信号在林杜伊诺斯 QuikEval 连接器上共享相同的引脚。
此外，I2C 端口 SDA 和 SPI 端口 MOSI 信号在林杜伊诺斯 QuikEval 连接器上共享同一引脚。
连接到 QuikEval 连接器的一对引脚使用林杜伊诺板上的 MUX 进行切换。
切换 MUX 的控制引脚定义为QUIKEVAL_MUX_MODE_PIN （Arduino 引脚 8） */
//! @}

// 宏
//! 设置"引脚"低
//! 参数引脚驱动低
#define output_low(pin)   digitalWrite(pin, LOW)
//! 设置"引脚"高
//! 参数引脚驱动高
#define output_high(pin)  digitalWrite(pin, HIGH)
//! 返回引脚"引脚"的状态
//! 要读取的参数引脚（高或低）。
//! 返回引脚"引脚"的状态
#define input(pin)        digitalRead(pin)

//! 名称 ENDIAN 依赖字节索引
//! @{
//! Arduino/Linduino 是一个Little Endian Device，其中最低有效字节存储在较大数据类型的第一个字节中。
#ifdef BIG_ENDIAN
#define LSB 1 //!< 当 Word 作为字节数组访问时，最低有效字节的位置
#define MSB 0 //!< 当 长字Word 作为字节数组访问时，最高有效字节的位置
#define LSW 1 //!< 当作为字节数组访问时，最低有效字节的位置
#define MSW 0 //!< 当长字作为字节数组访问时，最高有效字的位置
#else
#define LSB 0 //!< 以字节数组形式访问Word时，最低有效字节的位置
#define MSB 1 //!< 当以字节数组形式访问Word时，最高有效字节的位置
#define LSW 0 //!< 以字节数组访问长字时，最低有效字的位置
#define MSW 1 //!< 当长字作为字节数组访问时，最高有效字的位置
#endif
//! @}

//! This union splits one int16_t (16-bit signed integer) or uint16_t (16-bit unsigned integer)
//! into two uint8_t's (8-bit unsigned integers) and vice versa.
  union LT_union_int16_2bytes
  {
    int16_t LT_int16;    //!< 16-bit signed integer to be converted to two bytes
    uint16_t LT_uint16;  //!< 16-bit unsigned integer to be converted to two bytes
    uint8_t LT_byte[2];  //!< 2 bytes (unsigned 8-bit integers) to be converted to a 16-bit signed or unsigned integer
  };

//! This union splits one int32_t (32-bit signed integer) or uint32_t (32-bit unsigned integer)
//! four uint8_t's (8-bit unsigned integers) and vice versa.
union LT_union_int32_4bytes
{
  int32_t LT_int32;       //!< 32-bit signed integer to be converted to four bytes
  uint32_t LT_uint32;     //!< 32-bit unsigned integer to be converted to four bytes
  uint8_t LT_byte[4];     //!< 4 bytes (unsigned 8-bit integers) to be converted to a 32-bit signed or unsigned integer
};

//! This union splits one int32_t (32-bit signed integer) or uint32_t (32-bit unsigned integer)
//! into two uint16_t's (16-bit unsigned integers) and vice versa.
union LT_union_uint32_2uint16s
{
  int32_t LT_int32;       //!< 32-bit signed integer to be converted to four bytes
  uint32_t LT_uint32;     //!< 32-bit unsigned integer to be converted to four bytes
  uint16_t LT_uint16[2];  //!< 2 words (unsigned 16-bit integers) to be converted to a 32-bit signed or unsigned integer
};

//! This union splits one float into four uint8_t's (8-bit unsigned integers) and vice versa.
union LT_union_float_4bytes
{
  float LT_float;      //!< float to be converted to four bytes
  uint8_t LT_byte[4];  //!< 4 bytes (unsigned 8-bit integers) to be converted to a float
};


#endif  // LINDUINO_H
