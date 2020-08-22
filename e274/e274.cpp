/****************************************************************************
**
** 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
** Enter your age: 29
**
****************************************************************************/

#include <iostream>

void myFunction1(void);

int main()
{
    myFunction1();

    return 0;
}

void myFunction1(void)
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Your age contains " << age * 12 << " months" << std::endl;
}
