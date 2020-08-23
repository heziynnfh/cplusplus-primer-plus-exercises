/****************************************************************************
**
** 编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车油耗为
** 一加仑的里程。如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入
** 汽油量，然后指出欧洲风格的结果——即每100公里的耗油量（升）。
**
****************************************************************************/

#include <iostream>

double OilWaste_US_to_EU(double waste_in_us);

int main()
{
    int flag = 0;
    int distance = 0;
    int waste = 0;

    using namespace std;

    cout << "将读取您的里程和汽油量，请选择默认或欧洲风格输入信息\n" << "默认风格请输入0，欧洲风格请输入1：";
    cin >> flag;

    if (flag == 0) {
        cout << "请输入里程（英里）：";
        cin >> distance;
        cout << "请输入汽油使用量（加仑）：";
        cin >> waste;
        cout << "油耗为：" << OilWaste_US_to_EU((double)distance / waste) << " l/100km.";
    }

    if (flag == 1) {
        cout << "请输入里程（公里）：";
        cin >> distance;
        cout << "请输入汽油使用量（升）：";
        cin >> waste;
        cout << "油耗为：" << (double)waste / distance * 100 << " l/100km.";
    }

    return 0;
}

double OilWaste_US_to_EU(double waste_in_us)
{
    double var = 0;
    var = 62.14 * 3.875 / waste_in_us;
    return var;
}