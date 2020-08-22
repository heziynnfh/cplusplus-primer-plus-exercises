/****************************************************************************
**
** 编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个
** void函数，后者以下面这样的格式显示这两个值：
** Enter the number of hours: 9
** Enter the number of minutes: 28
** Time: 9:28
**
****************************************************************************/

#include <iostream>

void myFunction1(int hour, int minutes);

int main()
{
    int hour = 0;
    int minute = 0;
    std::cout << "Enter the number of hours: ";
    std::cin >> hour;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minute;

    myFunction1(hour, minute);

    return 0;
}

void myFunction1(int hour, int minute)
{
    std::cout << "Time: " << hour << ":" << minute << std::endl;
}
