/****************************************************************************
**
** 编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储），然后以天
** 、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少
** 分钟一集每分钟有多少秒。该程序的输出应与下面类似。
** Enter the number of seconds: 31600000
** 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds.
** 
****************************************************************************/

#include <iostream>

const int hours_per_day = 24;
const int minutes_per_hour = 60;
const int seconds_per_minute = 60;

int main()
{
    long second_sum = 0;
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    using namespace std;

    cout << "Enter the number of seconds: ";
    cin >> second_sum;

    seconds = second_sum % seconds_per_minute;
    minutes = second_sum / seconds_per_minute % minutes_per_hour;
    hours   = second_sum / seconds_per_minute / minutes_per_hour % hours_per_day;
    days    = second_sum / seconds_per_minute / minutes_per_hour / hours_per_day;

    cout << second_sum << " seconds = "   \
        << days << " days, "              \
        << hours << " hours, "            \
        << minutes << " minutes, "        \
        << seconds << " seconds.";

    return 0;
}
