# 在代码开头指定编码
# -*- coding: utf-8 -*-
# 单行注释

'''
多行注释
'''

"""
也是多行注释
"""

print("hello world")

str = "123456"
print(str)
print(str[1:3])
print(str[-1:3])
print(str[3:8])
print("hello" + " " + "python")
print('hello\npython')
print(r'hello\npython')

input("\n按下回车后退出")

print('1');print('2');print('3')

import sys
for i in sys.argv:
    print(i)


a = 100 # 整型变量
b = 3.14 # 浮点型变量
b = 1
print(b)
name = "tom" # 字符串
print(a)
print(b)
print(name)
print(type(a))
print(type(b))
print(type(name))
a = '99'
print(a)
# name[0]='h'# python 中字符串不能被改变 TypeError: 'str' object does not support item assignment

print(chr(90))
print(chr(490)) # 返回 Unicode 码点为整数 i 的字符
print('\u014a')


import math
print(math.modf(3.14))
print(math.pi)
print(math.e)

c = 'c'
print(c)





# import time

# for i in range(101): # 添加进度条图形和百分比
#     bar = '[' + '=' * (i // 2) + ' ' * (50 - i // 2) + ']'
#     print(f"\r{bar} {i:3}%", end='', flush=True)
#     time.sleep(0.05)
# print()


print ("我叫 %s 今年 %d 岁!" % ('小明', 10))


set1 = set([1,2,3])
set2 = {4,5,6}
print(set1) # 与 js 相同，set 类型不会重复
print(1 in set1) # True


a = set('abcabd')
b = set('abclk')
print(a)
print(b)
print(a - b) # 在集合 a 中且不在结合 b 中
print(a | b) # a 并 b
print(a & b) # a 交 b
print(a ^ b) # a 并 b - a 交 b
a.add('h')
print(a)
a.remove('d')
print(a)
a.discard('d')
print(a)
a.pop()
print(a)
print(len(a))
a.clear()
print(a)


num = 7
if num>8:
    print('num>8')
elif num>5:
    print('num>5')
else:
    print('else')


def http_error(status):
    match status:
        case 400:
            return "bad request"
        case 404:
            return "Not found"
        case _:
            return "..."

mystatus = 400
print(http_error(mystatus))


# while 循环
index = 0
while index<10:
    print(index)
    index+=1

print('-------------')

count = 0
while count<5:
    count+=1
else:
    print(count)


for name in ["tom","mike","jerry","harrry"]:
    print(name)


print("spell print ")
for c in 'print':
    print(c)


for i in range(6):
    print(i)


for j in range(4,9):
    print(j)


for letter in 'Runoob': 
   if letter == 'o':
      pass
      print ('执行 pass 块')
   print ('当前字母 :', letter)
 
print ("Good bye!")


# 推导式
names = ['Blob','Tom','Alice','Blob']
newNames = [name.upper() for name in names if len(name)>3]
print(newNames)


# 迭代器
list = [1,2,3,4]
i = iter(list)
print(i)
# print(next(i))
# print(next(i))
# print(next(i))
for x in i:
    print(x)


with open('./README.MD') as file:
    content = file.read()
    print(content)


def sum(a,b):
    return a+b

print(sum(1,2))


def change(a):
    print(id(a))
    a=10
    print(id(a))

a = 1
print(id(a))
change(a)
print(a)


def changelist(l):
    print(l)
    l.append([1,2])
    print(l)

l = [3,4,5]
print(l)
changelist(l)
print(l)


def sum(*vartuple):
    print(vartuple)
    s = 0
    for v in vartuple:
        s+=v
    return s

print(sum(1,2,3,4))
print(sum(1,2,3,4,5,6))


x = lambda a : a+10
print(x(5))


import say
say.sayHello()


print(__name__)

print('sys:')
print(dir(sys))
print('say:')
print(dir(say))


f = open('./README.MD','r+')
print(f.read())
num = f.write('write sth to file')
print(num)
print(f.tell())
f.close()


import os
print(os.getcwd())
print(os.listdir())
# os.mkdir('make-dir')


class animal:
    name = 'NAME'
    def sleep(self):
        print('sleep...')


cat = animal()
print(cat)
print(cat.name)
print(cat.sleep())




#!/usr/bin/python3
 
#类定义
class people:
    #定义基本属性
    name = ''
    age = 0
    #定义私有属性,私有属性在类外部无法直接进行访问
    __weight = 0
    #定义构造方法
    def __init__(self,n,a,w):
        self.name = n
        self.age = a
        self.__weight = w
    def speak(self):
        print("%s 说: 我 %d 岁。" %(self.name,self.age))
 
#单继承示例
class student(people):
    grade = ''
    def __init__(self,n,a,w,g):
        #调用父类的构函
        people.__init__(self,n,a,w)
        self.grade = g
    #覆写父类的方法
    def speak(self):
        print("%s 说: 我 %d 岁了，我在读 %d 年级"%(self.name,self.age,self.grade))
 
#另一个类，多继承之前的准备
class speaker():
    topic = ''
    name = ''
    def __init__(self,n,t):
        self.name = n
        self.topic = t
    def speak(self):
        print("我叫 %s，我是一个演说家，我演讲的主题是 %s"%(self.name,self.topic))
 
#多继承
class sample(speaker,student):
    a =''
    def __init__(self,n,a,w,g,t):
        student.__init__(self,n,a,w,g)
        speaker.__init__(self,n,t)
 
test = sample("Tim",25,80,4,"Python")
test.speak()   #方法名同，默认调用的是在括号中参数位置排前父类的方法
 
s = student('ken',10,60,3)
s.speak()


None


a = [1,2,3,None,(),[],]
print(len(a))


import calendar
cal = calendar.month(2025,10)
print(cal)