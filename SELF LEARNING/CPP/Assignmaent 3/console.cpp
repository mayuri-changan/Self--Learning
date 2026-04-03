// 15. Implement console I/O operations through your program.
#include<iostream>
using namespace std;

int main() {
    int num;
    float price;
    char grade;
    string name;

    // Console Input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter grade: ";
    cin >> grade;

    // Console Output
    cout << "\n--- Output ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Number: " << num << endl;
    cout << "Price: " << price << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
