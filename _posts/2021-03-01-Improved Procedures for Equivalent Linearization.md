---
layout:     post
title:      fema-440:6.Improved Procedures for Equivalent Linearization
subtitle:   fema-440:6.等效线性化的改进方法
date:       2021-03-01
author:     JS
header-img: img/post-bg-abaqus.jpg
catalog: true
tags:
    - fema
    - pushover
    - Equivalent Linearization
---

## 6.1 Introduction

This chapter presents an improved equivalent linearization procedure as a modification to the Capacity-Spectmm Method (CSM) of ATC-40. The CSM is a form of equivalent linearization briefly summarized in Sections 2.4 and 3.3.1. Detailed information on equivalent linearization in general and the derivation of the improved procedures are included in Appendix D.

本章提出了一种改进的等效线性化方法，作为对ATC-40需求谱方法（CSM）的改进。CSM是第2.4节和第3.3节简要总结的等效线性化形式。关于一般等效线性化和改进程序推导的详细信息见附录D。

When equivalent linearization is used as a part of a nonlinear static procedure that models the nonlinear response of a building with a SDOF oscillator, the objective is to estimate the maximum displacement response of the nonlinear system with an "equivalent" linear system using an effective period, Teff, and effective damping,$\beta$eff, Aff (see Figure 6-1). The global force-deformation relationship shown in Figure 6-1 for a SDOF oscillator in acceleration-displacement response spectrum (ADRS) format is termed a capacity curve. The capacity curve shown in Figure 6-1 is developed using the conventional procedures of FEMA 356 or ATC-40. The effective linear parameters are ftnctions of the characteristics of the capacity curve, the corresponding initial period and damping, and the ductility demand, g, as specified in the following sections.

当使用等效线性化作为非线性静力过程的一部分，用单自由度振子模拟建筑物的非线性响应时，目标是使用有效周期Teff和有阻尼ßrff估计具有“等效”线性系统的非线性系统的最大位移响应，Aff（见图6-1）。图6-1所示的加速度-位移响应谱（ADRS）格式的单自由度振荡器的整体力-变形关系称为能力曲线。图6-1所示的容量曲线是使用FEMA 356或ATC-40的常规程序绘制的。有效线性参数是承载力曲线特征、相应的初始周期和阻尼以及延性要求g的函数，如以下章节所述。

Recommendations for the improved equivalent linearization procedures rely on the previous procedures in ATC-40, and much of the process remains the same. This chapter focuses on the parts that change. The following section presents new expressions to determine effective period and effective damping. It also includes a technique to modify the resulting demand spectrum to coincide with the familiar CSM technique of using the intersection of the modified demand with thvapacity curve to generate a performance point for the structural model. The reduction in the initial demand spectrum resulting from the effective damping may be determined using conventional techniques outlined in Section 6.3. The previous limits on effective damping of ATC-40 should not be applied to these new procedures. However, the user must recognize that the results are an estimate of median response and imply no factor of safety for structures that may exhibit poor performance and/or large uncertainty in behavior. The effective parameters for equivalent linearization are functions of ductility. Since ductility (the ratio of maximum displacement to yield displacement) is the object of the analysis, the solution must be found using iterative or graphical techniques. Three of these are presented in Section 6.4. They have been developed to be similar to those of ATC-40.

改进等效线性化程序的建议依赖于ATC-40中以前的程序，并且大部分过程保持不变。本章重点讨论了发生变化的部分。下节介绍了确定有效周期和有效阻尼的新表达式。它还包括一种技术，用于修改生成的需求谱，以与熟悉的CSM技术一致，即使用修改后的需求与产能曲线的交集来生成结构模型的性能点。可使用第6.3节概述的常规技术确定有效阻尼导致的初始需求谱的减少。先前对ATC-40有效阻尼的限制不适用于这些新程序。然而，用户必须认识到，结果是对响应中值的估计，并且对于可能表现出较差性能和/或行为存在较大不确定性的结构，不意味着安全系数。等效线性化的有效参数是延性的函数。由于延性（最大位移与屈服位移之比）是分析的对象，因此必须使用迭代或图解技术找到解决方案。其中三个在第6.4节中介绍。它们已经被开发成类似于ATC-40。

Finally, it should be noted that these procedures may not be reliable for extremely high ductilities (e.g., greater than 10 to 12).

最后，应注意的是，对于极高的延展性（例如，大于10到12），这些程序可能不可靠。



