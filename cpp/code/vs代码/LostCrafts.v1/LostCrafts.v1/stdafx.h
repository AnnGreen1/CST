// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  在此处引用程序需要的其他头文件
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include"Windows.h"
//8个技能
#define CRAFTS_NUM 8
//宏定义  暂停和清屏操作
#define PCL system ("pause");system("cls");