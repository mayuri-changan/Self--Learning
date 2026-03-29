// 6. Implement Abstract classes in your program  
#include <iostream>
using namespace std;


class Shape {
public:
   
    virtual void area() = 0;

   
    void display() {
        cout << "This is a Shape" << endl;
    }
};


class Rectangle : public Shape {
private:
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};


class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape *ptr;  

    Rectangle r(10, 5);
    Circle c(3.5);

    ptr = &r;
    ptr->display();
    ptr->area();

    cout << endl;

    ptr = &c;
    ptr->display();
    ptr->area();

    return 0;
}
