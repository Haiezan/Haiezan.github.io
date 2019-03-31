---
layout:     post
title:      GitBook生成静态html格式电子书
subtitle:   解决生成html时的一些问题
date:       2019-03-31
author:     JS
header-img: img/post-bg-books.jpg
catalog: true
tags:
    - GitBook
    - Node.js
    - html
---

上一篇文章介绍了用Gitbook编辑电子书的一些方法，但是笔者在使用过程中遇到了一些问题，本篇博文重点解决这个问题。

---

## html电子书生成

安装好**node.js**和**Gitbook**之后，在命令行中直接输入：

`gitbook build`

如果正确生成，则会显示如下：

![](https://wx4.sinaimg.cn/mw1024/783153a1gy1g1luh0hlq1j20it0caabj.jpg)

进入文件目录，会看见有个_book文件夹，进入之后找到index.html就是电子书主页。

## "gitbook build"命令导出的html不能跳转

win7系统，gitbook新版本不支持html跳转功能，需要把Gitbook降版本至2.6.7。

可以在生成时指定版本：

` gitbook build --gitbook=2.6.7 `

如果报错，需要手动卸载掉最新版本，重新安装2.6.7版：
 
`gitbook ls` 列出所有版本
`gitbook uninstall 3.2.3` 卸载当前版本
`gitbook fetch 2.6.7` 获取2.6.7版
`gitbook install 2.6.7` 安装2.6.7版

重新build：

`gitbook build`

## Error: Cannot find module 'internal/util/types'

在build过程中可能会出现这个错误，是由于**node.js**版本不匹配造成，需要安装**node.js**的旧版本。

在**控制面板**中将**node.js**卸载，下载[**node.js v6lts**](https://nodejs.org/dist/latest-v6.x/)(当然其他版本可能也可以)版本。

安装后重新build即可。

## 这样就可以愉快的创作了~~

![](https://arts.uottawa.ca/english/sites/arts.uottawa.ca.english/files/creativewritingimage.jpg)
