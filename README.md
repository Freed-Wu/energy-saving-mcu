# energy-saving-mcu

A program of 2 arduinos. one detect if someone leaves by PIR, another turn off
all electrical machines when someone leaves.

## 断流器
* one.ino烧进UNO主机，two.ino烧进MEGA从机。
* UNO 2---PIR，3，4--蓝牙串口
* MEGA 2--断路器，3，4--蓝牙串口
* 如果PIR被东西遮挡后暴露，主机通过蓝牙向从机发送OK，从机断开电视机电流后通过蓝牙向主机回OK。

## 注意！！！！
* 睡眠模式开启后串口调试将无法继续正常工作。所以在调试阶段将其注释。
* 蓝牙已经设置好，设置以注释的形式写在程序里了，不再另加说明。
* 为了节能，主循环为空，以中断的形式工作
* 引脚功能有说明，有的引脚没有对应的复用功能，不建议改引脚，除非改的人清楚这个。
* 嫌arduino IDE不好用，用VS编辑，但不影响原IDE编译
* 蓝牙工作距离5-10米，PIR2-5米，在寝室测试过了
* 断路器可正常工作。已经经过测试了。
