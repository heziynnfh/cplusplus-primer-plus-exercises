/****************************************************************************
**
** 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为
** 英尺和英寸的格式。该程序使用下划线字符来指示输入位置。另外，使用一个const符号来表
** 示转换因子。
**
****************************************************************************/

#include <iostream>

void myFunction1(int inch);

int main()
{
    int height;

    std::cout << "Enter your height in inch: ";
    std::cin >> height;

    myFunction1(height);

    return 0;
}

void myFunction1(int inch)
{
    const int factor = 12;

    std::cout << "your height is " << inch / 12;
    std::cout << " feet and " << inch % factor << " inches." << std::endl;
}
