#include <iostream>
using namespace std;
// 问题描述：输入一个学生成绩，如果大于等于90分，则输出A；如果小于60分，则输出C；否则输出B。
// 程序分析：使用条件运算符，即三目运算符。
int main()
{
    int score;
    cout << "请输入学生成绩：";
    cin >> score;

    cout << (score >= 90 ? 'A' : (score < 60 ? 'C' : 'B')) << endl;

    return 0;
}