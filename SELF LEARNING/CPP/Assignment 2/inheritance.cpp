// 4. Design a hierarchy of computer printers. Use multiple inheritance in your hierarchy. Also use 
// friend functions and classes in your program.

#include <iostream>
using namespace std;

// Base Class 1
class Printer {
protected:
    string brand;

public:
    Printer(string b) {
        brand = b;
    }
};

// Base Class 2
class Scanner {
protected:
    int dpi;

public:
    Scanner(int d) {
        dpi = d;
    }
};


class Technician;


class AllInOne : public Printer, public Scanner {
private:
    int pages;

public:
    AllInOne(string b, int d, int p) : Printer(b), Scanner(d) {
        pages = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Scanner DPI: " << dpi << endl;
        cout << "Pages Printed: " << pages << endl;
    }

 
    friend void showDetails(AllInOne obj);


    friend class Technician;
};

void showDetails(AllInOne obj) {
    cout << "\n[Friend Function Access]" << endl;
    cout << "Brand: " << obj.brand << endl;
    cout << "DPI: " << obj.dpi << endl;
    cout << "Pages: " << obj.pages << endl;
}


class Technician {
public:
    void repair(AllInOne obj) {
        cout << "\n[Technician Access]" << endl;
        cout << "Repairing Printer of brand: " << obj.brand << endl;
        cout << "Checking DPI: " << obj.dpi << endl;
    }
};

int main() {
    AllInOne printer("HP", 1200, 50);

    cout << "Normal Access:\n";
    printer.display();

    showDetails(printer);

  
    Technician tech;
    tech.repair(printer);

    return 0;
}
