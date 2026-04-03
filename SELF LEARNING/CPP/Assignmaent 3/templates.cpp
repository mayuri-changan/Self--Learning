// 17. Assignments on templates
#include<iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    swapValues(x, y);

    cout << "After swap: " << x << " " << y;
    return 0;
}
