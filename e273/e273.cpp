/****************************************************************************
**
** 编写一个C++程序，它使用3个用户定义的函数（包括main()），并生成下面的输出
** Three blind mice
** Three blind mice
** See how they run
** See how they run
**
****************************************************************************/

#include <iostream>

void myFunction1(void);
void myFunction2(void);

int main()
{
    myFunction1();
    myFunction1();
    myFunction2();
    myFunction2();

    return 0;
}

void myFunction1(void)
{
    std::cout << "Three blind mice" << std::endl;
}

void myFunction2(void)
{
    std::cout << "See how they run" << std::endl;
}
