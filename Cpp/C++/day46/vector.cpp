#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// vector container
int main()
{
    vector<int> v; // 构造函数
    v.reserve(100); // 预留空间
    for (int i = 0; i < 10; i++) {
        v.push_back(rand() % 100); // 尾部添加
    }
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << v.size() << endl; // 长度
    cout << v.max_size() << endl; // 最大长度
    cout << v.capacity() << endl; // 容量，起始空间15
    cout << v.empty() << endl; // 是否为空
    cout << v[0] << endl; // 访问
    cout << v.at(0) << endl; // 访问
    cout << v.front() << endl; // 访问
    cout << v.back() << endl; // 访问
    v.push_back(10); // 尾部添加
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    v.pop_back(); // 尾部删除

    v.insert(v.begin(), 10); // 插入
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    // v.erase(v.begin()); // 删除

    // v.replace(v.begin(), v.end(), 10); // 替换
    /*  for (auto it = v.begin(); it != v.end(); ++it) {
         if (*it % 2 == 0) {
             it = v.insert(it, 10); // 更新迭代器
             ++it;
         }
     } */
    /* for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl; */

    /* for_each(v.begin(), v.end(), [](int& x) {
        cout << x << " ";
    });
        cout << endl; */

    /*  */
    /* for (int x : v) {
        cout << x << " ";
    }
    cout << endl; */

    sort(v.begin(), v.end()); // 排序
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    /*  sort(v.begin(), v.end(), [](int x, int y) {
         return x > y;
     }); // 排序
     for (int x : v) {
         cout << x << " ";
     }
     cout << endl; */
    // 查找
    auto it = lower_bound(v.begin(), v.end(), 10); // 查找第一个大于等于10的元素,返回迭代器
    cout << *it << endl; // 10
    // 二分查找
    auto it2 = binary_search(v.begin(), v.end(), 10); // 查找第一个大于等于10的元素，返回bool
    cout << it2 << endl; // 1
    // find
    auto it3 = find(v.begin(), v.end(), 34); // 返回迭代器
    cout << it3 - v.begin() << endl; // 3
    // find_if
    auto it4 = find_if(v.begin(), v.end(), [](int x) { // 返回迭代器,找到第一个满足条件的元素
        return x > 50;
    }); // 返回迭代器
    if (it4 != v.end()) {
        it = v.insert(it4, 7); // 更新迭代器
    }
    for (int x : v) {
        cout << x << " ";
    }
    // done*********************************************************************
    // 绑定器bind
	

    /* v.clear(); // 清空
    cout << v.empty() << endl; // 是否为空 */

    return 0;
}