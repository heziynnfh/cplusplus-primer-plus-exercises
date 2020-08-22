/****************************************************************************
**
** 编写一个程序，要求用户输入全球当前的人口和美国的人口（或其他国家的人口）。将这些信
** 存储在long long变量中，并让程序显示美国（或其他国家）的人口占全球人口的百分比。该
** 程序的输出应与下面类似：
** Enter the world's population: 689875899
** Enter the ppulation of the US: 310783781
** The population of the US is 4.50492% of the world population.
**
****************************************************************************/

#include <iostream>

int main()
{
    long long population_sum = 0;
    long long population_us = 0;
    double rate = 0;

    using namespace std;

    cout << "Enter the world's population: ";
    cin >> population_sum;
    cout << "Enter the ppulation of the US: ";
    cin >> population_us;

    rate = (double)population_us / population_sum * 100;

    cout << "The population of the US is "<< rate <<"% of the world population.";

    return 0;
}
