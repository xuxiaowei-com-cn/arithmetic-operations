﻿// arithmetic-operations.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "arithmetic-operations.h"


// 这是导出变量的一个示例
ARITHMETICOPERATIONS_API int narithmeticoperations=0;

// 这是导出函数的一个示例。
ARITHMETICOPERATIONS_API int fnarithmeticoperations(void)
{
    return 0;
}

// 这是已导出类的构造函数。
Carithmeticoperations::Carithmeticoperations()
{
    return;
}

int sum(int a, int b) {
    return a + b;
}
