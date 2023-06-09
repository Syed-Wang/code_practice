#include <iostream>
using namespace std;
// string container
int main()
{

    string str = "hello"; // 构造函数
    // 迭代器
    str.reserve(100); // 预留空间
    for (string::iterator it = str.begin(); it != str.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    // 反向迭代器
    for (string ::reverse_iterator it = str.rbegin(); it != str.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << str.size() << endl; // 长度
    cout << str.max_size() << endl; // 最大长度
    cout << str.capacity() << endl; // 容量，起始空间15
    cout << str.empty() << endl; // 是否为空
    cout << str[0] << endl; // 访问
    cout << str.at(0) << endl; // 访问
    cout << str.front() << endl; // 访问
    cout << str.back() << endl; // 访问
    str.push_back('a'); // 尾部添加
    cout << str << endl;
    str.pop_back(); // 尾部删除
    cout << str << endl;
    str.insert(0, "world"); // 插入
    cout << str << endl;
    str.erase(0, 5); // 删除
    cout << str << endl;
    str.replace(0, 5, "world"); // 替换
    cout << str << endl;
    cout << str << endl;
    str.clear(); // 清空
    cout << str.empty() << endl; // 是否为空

    return 0;
}