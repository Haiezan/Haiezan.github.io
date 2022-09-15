---
layout:     post
title:      MFC动态调整对话框空间位置和大小EasySize
subtitle:   C++
date:       2021-03-12
author:     JS
header-img: img/post-bg-code.jpg
catalog: true
tags:
    - 编程
    - C++
    - MFC
---

## EasySize

[EasySize - Dialog Resizing in No Time!](https://www.codeproject.com/Articles/1657/EasySize-Dialog-Resizing-in-No-Time)

## 用法

* 1 将在对话框的属性里设置边框可调整大小的

* 2 在主窗体cpp添加 #include EasySize.h ，也可以按照原创的方法添加到 stdafx.h中

* 3 在定义主窗体的地方添加：

``` C++ 
class CEasySizeDemoDlg : public CDialog
{
DECLARE_EASYSIZE //添加这个，如果添加后编译错误，参考步骤2。

```

* 4 在主窗体的OnInitDialog消息函数中添加：

``` C++ 
BOOL CEasySizeDemoDlg::OnInitDialog()
{
CDialog::OnInitDialog();
...
INIT_EASYSIZE; //添加这个
return TRUE; // return TRUE unless you set thefocus to a control
}
```

* 5 重载消息WM_SIZE消息函数

``` C++ 
void CEasySizeDemoDlg::OnSize(UINT nType, int cx,int cy)
{
CDialog::OnSize(nType, cx, cy);
UPDATE_EASYSIZE; //添加这个
}
```

* 6 如果你希望窗口在调整大小的时候限制最大不能超过多少，最小不能小于多少可以重载onsizing消息

这个消息好象不能在类向导里直接添加，其实是可以的。当然，你要是嫌麻烦的话，就如下做：

``` C++ 
ON_WM_SIZE();下面再添加了这个
ON_WM_SIZING() ;
```

然后查找到：

``` C++ 
afx_msg void OnSize(UINT nType, int cx, int cy);下面再添加了这个
afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
```

再添加事件处理函数：

``` C++ 
void CEasySizeDemoDlg::OnSizing(UINT fwSide, LPRECTpRect)
{
CDialog::OnSizing(fwSide, pRect);
EASYSIZE_MINSIZE(280,250,fwSide,pRect); //280,250是最小尺寸，
//如果想拥有最大尺寸功能可以修改EasySize.h，仿照EASYSIZE_MINSIZE的方法写个最大限制的。
}
```

当然，你也可以用类向导来做的：类向导—>classinfo(类信息)—>Messagefilter—>Windows

好了，然后你再回到Message maps里面去看message是不是里面就有了你要的WM_SIZING了，^_^!

* 7 最后添加 消息映射

``` C++ 
BEGIN_EASYSIZE_MAP( your main dialog name) //这里修改成主窗体类名
...
//这里针对每个需要在调整窗体大小时调整大小位置的控件添加处理函数
EASYSIZE(control,left,top,right,bottom,options) //这里的control写控件的id号
//left：如果要保持与主窗体左边位置固定可以写ES_BORDER，如果要保持大小不变，此处不加特殊处理，写ES_KEEPSIZE，如果要以其他空间的左边，作为基准可以写该控件的id号
//top,right,bottom同上
//options控制水平垂直居中效果，如ES_HCENTER|ES_VCENTER ，无特殊写0
...
END_EASYSIZE_MAP
```

## EASYSIZE(control,left,top,right,bottom,options)的用法

其中：control为对话框中的控件ID值，left,top,right,bottom四个参数为控件位置的坐标，其值可以选择ES_BOARD, ES_KEEPSIZE, 控件ID值三者之一。Options可以为ES_HCENTER, ES_VCENTER的结合，options可置0。

   1. 　　ES_BOARD表示控件与对话框边界(以下简称边界)的距离;
   2. 　　ES_KEEPSIZE表示控件水平/垂直方向上尺寸保持不变;
   3. 　　控件ID值表示当前控件与指定控件之间的距离;
   4. 　　ES_HCENTER表示缩放后控件在指定位置内水平居中;
   5. 　　ES_VCENTER表示缩放后控件在指定位置内垂直居中;

例如：

EASYSIZE(IDOK,ES_BORDER,ES_BORDER,ES_BORDER,ES_BORDER,0)

表示缩放后，值为IDOK的控件，距离边界上下左右位置保持不变，水平和垂直方向尺寸拉伸;

EASYSIZE(IDOK,ES_BORDER,ES_BORDER,ES_BORDER,ES_BORDER,ES_HCENTER)

表示缩放后，值为IDOK的控件，距离边界上下位置保持不变，垂直方向尺寸拉伸，水平居中;

EASYSIZE(IDOK,ES_BORDER,ES_BORDER,ES_BORDER,ES_BORDER,ES_HCENTER|ES_HCENTER)

表示缩放后，值为IDOK的控件，在对话框内垂直居中，水平居中;

EASYSIZE(IDOK,ES_BORDER,ES_KEEPSIZE,ES_KEEPSIZE,ES_BORDER,0)

表示缩放后，值为IDOK的控件，距离边界左、下方位置保持不变，同时保持控件尺寸;

EASYSIZE(IDOK,ES_BORDER,ES_KEEPSIZE,ES_BORDER,ES_BORDER,0)

表示缩放后，值为IDOK的控件，距离边界左、右、下方位置保持不变，水平方向尺寸拉伸，垂直方向尺寸不变;

EASYSIZE(IDOK,ES_BORDER,ES_BORDER,IDCANCEL,ES_BORDER,0)

表示缩放后，值为IDOK的控件，距离边界上下左位置保持不变，距离ID值为IDCANCEL的右方位置距离保持不变，水平和垂直方向尺寸拉伸;(当使用指定控件作为定位参数时候，确保指定控件的EASYSIZE在该宏前面)