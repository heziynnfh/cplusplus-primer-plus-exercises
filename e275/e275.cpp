﻿/****************************************************************************
**
** 编写一个程序，其中的main()调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的
** 华氏温度值）。该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
** Please enter a Celsius value: 20
** 20 degrees Celsius is 68 degrees Fahrenheit
**
** 华氏温度 = 1.8×摄氏温度 + 32.0
**
****************************************************************************/

#include <iostream>

int myFunction1(int CelsiusDegrees);

int main()
{
    int CelsiusDegrees = 0;

    std::cout << "Please enter a Celsius value: ";
    std::cin >> CelsiusDegrees;
    std::cout << CelsiusDegrees << " degrees Celsius is " << myFunction1(CelsiusDegrees) << " degrees Fahrenheit";

    return 0;
}

/*!
    将摄氏度转换为华氏度。
*/
int myFunction1(int CelsiusDegrees)
{
    return (int)(1.8 * CelsiusDegrees + 32);
}
