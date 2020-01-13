#coding:utf-8
import itertools
n= int(input())
p = itertools.product("abc",repeat=n)
for v in p:
    print ("".join(v))