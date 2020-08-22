/****************************************************************************
**
** 编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然
** 后将其转换为美国风格的耗油量——每加仑多少英里。注意，除了使用不同的单位计量为，美国方
** 法（距离/燃料）与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等于3.875升
** 。因此，19mpg大约合12.4l/100km，127mpg大约合8.7l/100km。
**
****************************************************************************/

#include <iostream>

double OilWaste_EU_to_US(double waste_in_eu);

int main()
{
    double waste_in_eu = 0;

    using namespace std;

    cout << "enter the oil waste of your car in eu style: ";
    cin >> waste_in_eu;

    cout << "the oil waste of your car in us style is "  \
        << OilWaste_EU_to_US(waste_in_eu) << ".";

    return 0;
}

double OilWaste_EU_to_US(double waste_in_eu)
{
    double var = 0;
    var = 62.14 * 3.875 / waste_in_eu;
    return var;
}
 