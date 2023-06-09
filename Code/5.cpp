#include <iostream>
using namespace std;

/**
 * @brief 交换两个整数，使用异或运算
 * 
 * @param a 
 * @param b 
 * @return void 
 */
void swap(int* a, int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
/**
 * @brief 从小到大排序
 * 
 * @return int 
 */
int main()
{
    int x, y, z;
    cout << "请出入三个整数：";
    cin >> x >> y >> z;

    if (x > y)
        swap(&x, &y);
    if (x > z)
        swap(&x, &z);
    if (y > z)
        swap(&y, &z);

    cout << "ascending order: " << x << " " << y << " " << z << endl;

    return 0;
}