// 14. Implement Custom exception class
#include<iostream>
using namespace std;

// Custom Exception Class
class MyException {
public:
    void showError() {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw MyException();  // Throw custom exception
        }

        cout << "Result = " << a / b << endl;
    }
    catch (MyException e) {
        e.showError();  // Handle exception
    }

    cout << "Program End" << endl;

    return 0;
}
