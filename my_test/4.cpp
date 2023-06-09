#include <iostream>
// 输入某年某月某日，判断这一天是这一年的第几天？
using namespace std;

int main()
{
    int year, month, day;
    int sum = 0;
    int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    cout << "请输入年月日：" << endl;
    cin >> year >> month >> day;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        month_day[1] = 29;
    }
    for (int i = 0; i < month - 1; i++) {
        sum += month_day[i];
    }
    sum += day;
    cout << "这一天是这一年的第" << sum << "天" << endl;

    return 0;
}