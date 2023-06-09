#include "stack.hpp"

int main()
{
    Stack<int> stack(5);
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    stack.stackTraverse(true);
    for (int i = 0; i < 5; i++) {
        int elem;
        stack.pop(elem);
        cout << elem << " ";
    }
    return 0;
}