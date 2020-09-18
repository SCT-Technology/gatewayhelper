# -*- coding: utf-8 -*-
# 这是一个python程序
x,z =map(int,input('输入x z:').split())
lenth = (x*x+z*z) ** 0.5
x_new1 = 768*x/lenth
z_new1 = 768*z/lenth
x_new2 = 1024*x/lenth
z_new2 = 1024*z/lenth
print('迁移后的最近点为（ %0.3f ，y， %0.3f ，迁移后的最远点为（ %0.3f ，y， %0.3f ） '%(x_new1,z_new1,x_new2,z_new2))
