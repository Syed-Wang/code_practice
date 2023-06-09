#include <iostream>
#include <list>
using namespace std;
// list is a doubly linked list
int main()
{
    list<int> l;

    for (int i = 0; i < 10; i++) { // insert 10 random numbers
        l.push_back(rand() % 100 + 1);
    }
    l.sort(greater<int>()); // sort in descending order
    for (int i : l) { // print the list
        cout << i << " ";
    }
    cout << endl;

    return 0;
}