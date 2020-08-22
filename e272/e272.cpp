
#include <iostream>

/*!
    编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码。（一long等于220码）。
*/
int main()
{
    int long1 = 0;
    int ma1 = 0;

    std::cout << "请输入long值：";
    std::cin >> long1;

    ma1 = long1 * 220;

    std::cout << long1 << " long = " << ma1 << " 码";
}
