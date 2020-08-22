/****************************************************************************
**
** 编写一个小程序，要求以几英尺几英寸的方式输入身高，并以磅为单位输入其体重。（使用3个
** 变量存储这些信息。）该程序报告其BMI（Body Mass Index，体重指数）。为了计算BMI，
** 该程序以英寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身高转换为以
** 米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位的体重转换为以千克为单位的体
** 重（1千克=2.2磅）。最后，计算相应的BMI——体重（千克）除以身高（米）的平方。用符号
** 常量表示各种转换因子。
**
****************************************************************************/

#include <iostream>

const int factor_foot_to_inch = 12;
const float factor_inch_to_meter = 0.0254;

int main()
{
    int height_in_foot;
    int height_in_less_inch;
    float weight_in_pound;
    float weight_in_km;

    std::cout << "Enter your height in foot and inch: " << std::endl;
    std::cout << "foot: ";
    std::cin >> height_in_foot;
    std::cout << "inch: ";
    std::cin >> height_in_less_inch;
    std::cout << "Enter your weight in pound: " << std::endl;
    std::cin >> height_in_less_inch;

    myFunction1(height);

    return 0;
}

void myFunction1(int inch)
{
    std::cout << "your height is " << inch / 12;
    std::cout << " feet and " << inch % 12 << " inches." << std::endl;
}
