#include <iostream>
using namespace std;
// 默认参数
void mail(string name, char a = '@', string domain = "gmail.com")
{
    cout << name << a << domain << endl;
}
int main()
{
    mail("zhangsan");
    mail("wangwu", '$');
    mail("lisi", '#', "163.com");

    return 0;
}