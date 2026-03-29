// 2. Implement constructor and destructors through your program  
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Default Constructor
    Student() {
        cout << "Default Constructor Called" << endl;
        rollNo = 0;
        name = "Unknown";
    }

    // Parameterized Constructor
    Student(int r, string n) {
        cout << "Parameterized Constructor Called" << endl;
        rollNo = r;
        name = n;
    }

    // Display Function
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called (Object Destroyed)" << endl;
    }
};

int main() {
    cout << "Creating Object 1" << endl;
    Student s1;   // Default constructor

    s1.display();

    cout << endl;

    cout << "Creating Object 2" << endl;
    Student s2(101, "Mayuri");   // Parameterized constructor

    s2.display();

    cout << endl;
    cout << "Program Ending..." << endl;

    return 0;
}
