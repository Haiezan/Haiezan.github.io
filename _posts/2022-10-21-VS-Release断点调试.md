---
layout:     post
title:      VS - Release断点调试
subtitle:   C++
date:       2022-10-21
author:     JS
header-img: img/post-bg-code.jpg
catalog: true
tags:
    - 编程
    - C++
    - VS
---

## 概述

Release用于指软件或操作系统的发布，一般与Debug版本相对应，后者默认可以调试。
 
## Debug与Release区别

Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。

Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用。

实际上，Debug 和 Release 并没有本质的界限，他们只是一组编译选项的集合，编译器只是按照预定的选项行动。事实上，我们甚至可以修改这些选项，从而得到优化过的调试版本或是带跟踪语句的发布版本。

 

## 怎样“调试” Release 版的程序

**以Vs2017为例**

打开工程属性页 - 配置选择release - 配置属性

### 1 C/C++ - 常规 - 调试信息格式

* 默认配置：空或无
* 调试配置：程序数据库(/Zi)或(/ZI)
 
### 2 C/C++ - 优化 - 优化

* 默认配置：最大优化(优化速度)(/O2)
* 调试配置：禁止(/Od)
 
### 3 链接器 - 调试 - 生成调试信息

* 默认配置：否
* 调试配置：是(/DEBUG)

 备注: 若Release下需断点调试则对上面三条配置“调试配置”；而需取消Release断点调试则对上面三条设置"默认配置"即可。

————————————————
版权声明：本文为CSDN博主「信必诺」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/automoblie0/article/details/118516610