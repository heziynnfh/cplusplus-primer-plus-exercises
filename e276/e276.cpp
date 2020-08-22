/****************************************************************************
**
** 编写一个程序，其main()调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的
** 的值）。该程序按下面的格式要求用户输入光年值，并显示结果。
** Enter the number of light years: 4.2
** 4.2 light years = 265608 astronmical units.
**
****************************************************************************/

#include <iostream>

int myFunction1(double LightYear);

int main()
{
    double LightYear = 0;

    std::cout << "Enter the number of light years: ";
    std::cin >> LightYear;
    std::cout << LightYear << " light years = " << myFunction1(LightYear) << "  astronmical units.";

    return 0;
}

/*!
    将light year转换为astronmical unit。
*/
int myFunction1(double LightYear)
{
    return (int)(LightYear * 63240);
}
