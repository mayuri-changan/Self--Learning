// 7. Using virtual and pure virtual functions implement hierarchy of computer printers 
#include <iostream>
using namespace std;


class Printer {
protected:
    string brand;

public:
    Printer(string b) {
        brand = b;
    }

   
    virtual void printType() = 0;

  
    virtual void show() {
        cout << "Printer Brand: " << brand << endl;
    }
};


class Inkjet : public Printer {
public:
    Inkjet(string b) : Printer(b) {}

    void printType() {
        cout << "Type: Inkjet Printer" << endl;
    }
};


class Laser : public Printer {
public:
    Laser(string b) : Printer(b) {}

    void printType() {
        cout << "Type: Laser Printer" << endl;
    }
};


class DotMatrix : public Printer {
public:
    DotMatrix(string b) : Printer(b) {}

    void printType() {
        cout << "Type: Dot Matrix Printer" << endl;
    }
};


int main() {
    Printer *p;

    Inkjet i("HP");
    Laser l("Canon");
    DotMatrix d("Epson");

    
    p = &i;
    p->show();
    p->printType();

    cout << endl;

   
    p = &l;
    p->show();
    p->printType();

    cout << endl;

    
    p = &d;
    p->show();
    p->printType();

    return 0;
}
