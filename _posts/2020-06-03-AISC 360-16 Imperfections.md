---
layout:     post
title:      AISC 360-16 Imperfections
subtitle:   AISC 360-16 Imperfections
date:       2020-06-03
author:     JS
header-img: img/eurocodes.jpg
catalog: true
tags:
    - AISC
    - Imperfections
---

# C2. CALCULATION OF REQUIRED STRENGTHS

...

## 2 Consideration of Initial System Imperfections

The effect of initial imperfections in the position of points of intersection of members on the stability of the structure shall be taken into account either by direct modeling of these imperfections in the analysis as specified in Section C2.2a or by the application of notional loads as specified in Section C2.2b.

构件交叉点位置的初始缺陷对结构稳定性的影响应通过在第C2.2a节规定的分析中对这些缺陷进行直接建模或通过应用第C2.2b节规定的名义荷载来考虑。

User Note: The imperfections required to be considered in this section are imperfections in the locations of points of intersection of members (system imperfections). In typical building structures, the important imperfection of this type is the out-of-plumbness of columns. Consideration of initial out-of-straightness of individual members (member imperfections) is not required in the structural analysis when using the provisions of this section; it is accounted for in the compression member design provisions of Chapter E and need not be considered explicitly in the analysis as long as it is within the limits specified in the Code of Standard Practice. Appendix 1, Section 1.2 provides an extension to the direct analysis method that includes modeling of member imperfections (initial out-of-straightness) within the structural analysis.

用户注意：本节要求考虑的缺陷是构件交叉点位置的缺陷（系统缺陷）。在典型的建筑结构中，这种类型的重要缺陷是柱的不垂直度。使用本节规定时，结构分析不需要考虑单个构件的初始不平直度（构件缺陷）；这在E章的受压构件设计规定中有说明，只要在标准操作规程中规定的限值范围内，分析中无需明确考虑。**附录1第1.2节**对直接分析方法进行了扩展，该方法包括结构分析中构件缺陷（初始不平直度）的建模。

### 2a. Direct Modeling of Imperfections

In all cases, it is permissible to account for the effect of initial system imperfections by including the imperfections directly in the analysis. The structure shall be analyzed with points of intersection of members displaced from their nominal locations. The magnitude of the initial displacements shall be the maximum amount considered in the design; the pattern of initial displacements shall be such that it provides the greatest destabilizing effect. 

在所有情况下，允许通过在分析中直接包含缺陷来考虑初始系统缺陷的影响。结构分析时，构件的交叉点应偏离其标称位置。初始位移的大小应为设计中考虑的最大值；初始位移的模式应使其提供最大的失稳效应。

> User Note: Initial displacements similar in configuration to both displacements due to loading and anticipated buckling modes should be considered in the modeling of imperfections. The magnitude of the initial displacements should be based on permissible construction tolerances, as specified in the Code of Standard Practice or other governing requirements, or on actual imperfections if known.

> 用户注意：在缺陷建模时，应考虑与荷载引起的位移和预期屈曲模式配置相似的初始位移。初始位移的大小应基于标准实施规程或其他管理要求中规定的允许施工公差，或基于已知的实际缺陷。

In the analysis of structures that support gravity loads primarily through nominally vertical columns, walls or frames, where the ratio of maximum second-order story drift to maximum first-order story drift (both determined for LRFD load combinations or 1.6 times ASD load combinations, with stiffnesses adjusted as specified in Section C2.3) in all stories is equal to or less than 1.7, it is permissible to include initial system imperfections in the analysis for gravity-only load combinations and not in the analysis for load combinations that include applied lateral loads.

在分析主要通过标称垂直柱、墙或框架支撑重力荷载的结构时，最大二阶层间位移与最大一阶层间位移之比（均为LRFD荷载组合或1.6倍ASD荷载组合确定，刚度按第C2.3节规定进行调整）楼层等于或小于1.7，允许将初始系统缺陷包括在仅重力荷载组合的分析中，而不包括在包括施加横向荷载的荷载组合的分析中。

### 2b. Use of Notional Loads to Represent Imperfections

For structures that support gravity loads primarily through nominally vertical columns, walls or frames, it is permissible to use notional loads to represent the effects of initial system imperfections in the position of points of intersection of members in accordance with the requirements of this section. The notional load shall be applied to a model of the structure based on its nominal geometry.

对于主要通过名义上的垂直柱、墙或框架支撑重力荷载的结构，允许根据本节的要求，使用名义荷载来表示构件交叉点位置的初始系统缺陷的影响。应根据结构的名义几何结构，将名义荷载应用于结构模型。

User Note: In general, the notional load concept is applicable to all types of structures and to imperfections in the positions of both points of intersection of members and points along members, but the specific requirements in Sections C2.2b(a) through C2.2b(d) are applicable only for the particular class of structure and type of system imperfection identified here.

用户注意：一般来说，概念荷载概念适用于所有类型的结构以及构件交叉点和构件沿线点位置的缺陷，但第C2.2b(a)至C2.2b(d)节中的具体要求仅适用于此处确定的特定类别的结构和系统缺陷类型。

(a) Notional loads shall be applied as lateral loads at all levels. The notional loads shall be additive to other lateral loads and shall be applied in all load combinations, except as indicated in Section C2.2b(d). The magnitude of the notional loads shall be:

(b) The notional load at any level, Vi, shall be distributed over that level in the same manner as the gravity load at the level. The notional loads shall be applied in the direction that provides the greatest destabilizing effect.

(c) The notional load coefficient of 0.002 in Equation C2-1 is based on a nominal initial story out-of-plumbness ratio of 1/500; where the use of a different maximum out-of-plumbness is justified, it is permissible to adjust the notional load coefficient proportionally.

(d) For structures in which the ratio of maximum second-order drift to maximum first-order drift (both determined for LRFD load combinations or I .6 times ASD load combinations, with stiffnesses adjusted as specified in Section C2.3) in all stories is equal to or less than 1.7, it is permissible to apply the notional load, Ni, only in gravity-only load combinations and not in combinations that include
other lateral loads.


## 关注微信公众号

英文原文链接[https://encyclopedia.thefreedictionary.com/eurocodes](https://encyclopedia.thefreedictionary.com/eurocodes)

如果本文对您有帮助，请转发让更多人看到，欢迎关注我的微信公众号，发现有意思的东西 

![](https://pic.downk.cc/item/5e50fa03bb8bdc23de243296.jpg)
 
