#include <iostream>
#include <memory>
using namespace std;

int main()
{
    std::shared_ptr<int> p1; // 不传入任何实参
    cout << p1.use_count() << endl;
    std::shared_ptr<int> p2(nullptr); // 传入空指针 nullptr
    cout << p2.use_count() << endl;
    std::shared_ptr<int> sp1(new int(10));
    cout << sp1.use_count() << endl;

    return 0;
}