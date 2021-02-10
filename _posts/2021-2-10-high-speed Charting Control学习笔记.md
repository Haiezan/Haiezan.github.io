---
layout:     post
title:      high-speed Charting Control学习笔记
subtitle:   记录Chart学习问题
date:       2021-2-10
author:     JS
header-img: img/post-bg-nonlinearity.jpg
catalog: true
tags:
    - C++
    - MFC
    - ChartCtrl
---

## 安装配置

https://blog.csdn.net/qq_36076137/article/details/111032383

（1）文件下载，建议GitHub下载，不收费。链接https://github.com/HongXG/ChartCtrl
（2）新建一个基于对话框的MFC应用，（建议起一个好找的名字，因为源文件很多），新建一个筛选器，命名为ChartCtrl，右键，添加新建项，选中source中文件。
（3）在工具箱中找到Custom Control，拖拽一个到界面，修改style为0x52010000，类为ChartCtrl。
（4）给刚拖拽的Custom Control控件添加变量，变量名m_chartctrl,变量类型CChartCtrl。
（5）在dlg.h中添加#include"ChartCtrl/ChartCtrl.h"
在dlg.cpp中添加如下#include “ChartCtrl/ChartCtrl.h”

## 错误

### high-speed chart 编译报错GetSerie(size_t) const”:“CChartCtrl”中没有找到重载的成员函数

报错： 
ChartCtrl.cpp(621): error C2511: “CChartSerie *CChartCtrl::GetSerie(size_t) const”:“CChartCtrl”中没有找到重载的成员函数 

修改CChartSerie* CChartCtrl::GetSerie(size_t uSerieId) const 为 
CChartSerie* CChartCtrl::GetSerie(unsigned uSerieId) const 

即可。




## 关注微信公众号

如果本文对您有帮助，请转发让更多人看到，欢迎关注我的微信公众号，发现有意思的东西 

![](https://pic.downk.cc/item/5e50fa03bb8bdc23de243296.jpg)
 
