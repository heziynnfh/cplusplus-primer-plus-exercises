/****************************************************************************
**
** 编写一个程序，要求用户以度、分、秒的方式输入一个维度，然后以度为单位显示该纬度。1度
** 为60分，1分等于60秒，请以符号常量的方式来表示这些值。对于每个输入值，应使用一个独立
** 的变量存储它。下面是该程序运行时的情况。
** Enter a latitude in degrees, minutes, and seconds:
** First, enter the degrees: 37
** Next, enter the minutess of arc: 51
** Finally, enter the seconds of arc: 19
** 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
**
****************************************************************************/

#include <iostream>

double myFunction1(int degree_part, int minute_part, int second_part);

const int factor_minute_to_second = 60;
const int factor_degree_to_minute = 60;

int main()
{
    int degree_part;
    int minute_part;
    int second_part;
    double degrees;

    using namespace std;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degree_part;
    cout << "Next, enter the minutess of arc: ";
    cin >> minute_part;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second_part;

    degrees = myFunction1(degree_part, minute_part, second_part);

    cout << degree_part << " degrees, " \
        << minute_part << " minutes, "  \
        << second_part << " seconds = " \
        << degrees << " degrees.";

    return 0;
}

/*!
    将度、分、秒的格式转换为度的格式。
*/
double myFunction1(int degree_part, int minute_part, int second_part)
{
    // 如果不做类型转换，最后的结果将是整型
    // 除数和被除数中出现浮点型时，可以使结果转换为浮点型
    double var1 = (double)second_part / factor_minute_to_second / factor_degree_to_minute;
    double var2 = (double)minute_part / factor_degree_to_minute;
    double var3 = (double)degree_part;

    return var1 + var2 + var3;
}
