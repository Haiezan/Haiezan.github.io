---
layout:     post
title:      ABAQUS层指标统计-ABA辅助程序V1.0
subtitle:   介绍了Delta线性屈曲分析的相关原理、使用方法以及工程案例。
date:       2020-02-28
author:     JS
header-img: img/post-bg-abaqus.jpg
catalog: true
tags:
    - ABAQUS
    - 层间位移角
    - 层剪力
---

隔离期间，小伙伴的学习热情很高，许多人看了之前写的关于ABAQUS计算的文章，开始学习ABAQUS的相关使用方法。近期很多人问怎么在ABAQUS中统计层间位移角和层剪力。

今天向大家介绍作者编写的一个小程序，可以方便对ABAQUS结果进行统计。

## 前期文章

* [ABAQUS弹塑性时程分析的高效实现方案](https://mp.weixin.qq.com/s/1PfIGuc57cbvtCobyWqwpA)
* [【续前篇】常用结构软件生成ABAQUS模型方法](https://mp.weixin.qq.com/s/K8h9fcKnvsmAwa6tsyM2cQ)
* [探秘INP-ABAQUS高效实现方案](https://mp.weixin.qq.com/s/hmNCw6jeuCGZkw8Ml5UEVQ)
* [轻松安装ABAQUS子程序](https://mp.weixin.qq.com/s/nETKAfl88ZpLYEU2d5GFYQ)
* [时程分析选波 A](https://mp.weixin.qq.com/s/bHFNePHUyIVyVGIuBBGo8A)
* [ABAQUS后处理（其一 整体指标）](https://mp.weixin.qq.com/s/QhfBmdcl7bXdlvpl7xQTIg)
* [ABAQUS后处理——损伤结果](https://mp.weixin.qq.com/s/vgVEz71oeMq4mUSPosOXfg)

## 程序下载

关注“梁柱墙笔记”公众号，后台回复“ABAQUS辅助程序”获取小程序下载链接。

![](https://pic.downk.cc/item/5e50fa03bb8bdc23de243296.jpg)


## 运行软件

双击“ABAQUS辅助程序V1.0.exe”运行小程序，主界面如下图所示。对于win10系统，请右键选择“以管理员身份运行”。

单击主界面中部“后处理”图标，进入层结果提取界面。

>主界面
![](https://pic.downk.cc/item/5e7458d7e83c3a1e3a290eb5.png)

>层结构提取界面
![](https://pic.downk.cc/item/5e7458d7e83c3a1e3a290ea9.png)

## 运行

在“ODB路径”中，点击“浏览”选择ABAQUS计算结果*.odb文件。

设置时程分析起止时刻：“StartTime”和“EndTime”。

勾选“剪力”或“位移”，分别可用于提取层剪力和层间位移角，也可同时勾选。

点击“Run”开始提取结果，软件自动弹出命令行执行统计任务。

正确运行后，结果目录下会生成层剪力和层位移结果文件。

>统计层剪力
![](https://pic.downk.cc/item/5e7458d7e83c3a1e3a290eae.png)

>统计层间位移角
![](https://pic.downk.cc/item/5e7458d7e83c3a1e3a290eb0.png)

>计算完成
![](https://pic.downk.cc/item/5e7458d7e83c3a1e3a290eb3.png)

>计算结果
![](https://pic.downk.cc/item/5e74590fe83c3a1e3a2935ae.jpg)

## 显示结果

点击“Plot”绘制层间位移角、层位移和层剪力曲线，可选择“按层”或“按高度”显示。

>层结果显示
![](https://pic.downk.cc/item/5e74590fe83c3a1e3a2935b1.png)

## 导出结果

点击“Excel”可将统计结果导出到Excel表格中，若计算机未正确安装Office可能导致导出失败。

>Excel结果
![](https://pic.downk.cc/item/5e74590fe83c3a1e3a2935b3.png)

## 错误提示1

![](https://pic.downk.cc/item/5e74590fe83c3a1e3a2935b5.png)

若计算过程中出现以上提示，有可能是node.txt无法识别，请用Windows自带记事本程序重新编辑node.txt文件。

## 错误提示2

![](https://pic.downk.cc/item/5e74590fe83c3a1e3a2935b8.png)

若计算过程中出现以上提示，则有可能是dispnode定义确实，请检查层间位移角统计节点是否在DISPNODES.inp中定义，注意inp文件中每行数据不应超过16个，若节点过多请进行换行操作。

## 说明

* 本程序使用过程中的问题请与“梁柱墙笔记”微信公众号联系；

* 若本文对您有帮助，欢迎转发、点赞、赞赏，支持作者，支持软件进步；

* 赞赏后可获得不限次使用方法。

## 关注微信公众号

如果本文对您有帮助，请转发让更多人看到，欢迎关注我的微信公众号，发现有意思的东西 

![](https://pic.downk.cc/item/5e50fa03bb8bdc23de243296.jpg)
 
