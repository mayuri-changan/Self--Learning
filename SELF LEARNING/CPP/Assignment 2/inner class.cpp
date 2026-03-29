// 3. Write a program to implement inner class in C++ 
#include <iostream>
using namespace std;

class Outer {
private:
    int x;

public:
    
    Outer(int a) {
        x = a;
    }


    class Inner {
    private:
        int y;

    public:
        Inner(int b) {
            y = b;
        }

        void displayInner() {
            cout << "Value of Inner class y = " << y << endl;
        }
    };

    void displayOuter() {
        cout << "Value of Outer class x = " << x << endl;
    }
};

int main() {
    
    Outer obj1(10);
    obj1.displayOuter();

   
    Outer::Inner obj2(20);
    obj2.displayInner();

    return 0;
}
