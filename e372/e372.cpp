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

int myFunction1(int height_in_foot, int height_in_less_inch);
double myFunction2(double weight_in_pound, int height_in_inch);

const int factor_foot_to_inch = 12;
const double factor_inch_to_meter = 0.0254;
const double factor_km_to_pound = 2.2;

int main()
{
    int height_in_foot;
    int height_in_less_inch;
    double weight_in_pound;
    int height_in_inch;

    using namespace std;

    cout << "Enter your height in foot and inch: " << endl;
    cout << "foot: ";
    cin >> height_in_foot;
    cout << "inch: ";
    cin >> height_in_less_inch;
    cout << "Enter your weight in pound: " << endl;
    cin >> weight_in_pound;

    height_in_inch = myFunction1(height_in_foot, height_in_less_inch);

    cout << "your height is " << height_in_inch << " inches" << endl;
    cout << "your weight is " << weight_in_pound << " pound" << endl;

    cout << "your BMI is " << myFunction2(weight_in_pound, height_in_inch);
    
    return 0;
}

int myFunction1(int height_in_foot, int height_in_less_inch)
{
    return height_in_foot * factor_foot_to_inch \
        + height_in_less_inch;
}

double myFunction2(double weight_in_pound, int height_in_inch)
{
    double var = 0;

    var = height_in_inch * factor_inch_to_meter;
    var *= var;

    return weight_in_pound / factor_km_to_pound / var;
}
