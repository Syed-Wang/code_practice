#include <iostream>
using namespace std;

bool isOdd(const int& n)
{
    if (n % 2 == 0) {
        return false;
    } else {
        return true;
    }
}

int main()
{
    int n = 10;
    cout << isOdd(n) << endl;
    cout << isOdd((int&)n) << endl; // same as above
    cout << isOdd(7) << endl;
    int m = 11;
    int& r = m;
    //int& const r1 = m; 
    const int& r2 = m; // same as above
    int const& r3 = m; // same as above
    cout << isOdd(r) << endl;
    const int& s1 = 12;
    int const& s2 = 12; // same as above
    // int& const s3 = 12;// error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    // const& int s4 = 12;// error: expected unqualified-id before 'int'
    cout << isOdd((int&)s1) << endl;

    return 0;
}