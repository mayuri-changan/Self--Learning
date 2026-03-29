// 8. Implement diamond problem with real life example 
#include <iostream>
using namespace std;


class Device {
public:
    void show() {
        cout << "This is a Device" << endl;
    }
};


class Printer : virtual public Device {
public:
    void print() {
        cout << "Printing document..." << endl;
    }
};


class Scanner : virtual public Device {
public:
    void scan() {
        cout << "Scanning document..." << endl;
    }
};


class SmartDevice : public Printer, public Scanner {
public:
    void smartFeature() {
        cout << "Smart device features activated" << endl;
    }
};

int main() {
    SmartDevice obj;

    obj.show();       // No ambiguity due to virtual inheritance
    obj.print();
    obj.scan();
    obj.smartFeature();

    return 0;
}
