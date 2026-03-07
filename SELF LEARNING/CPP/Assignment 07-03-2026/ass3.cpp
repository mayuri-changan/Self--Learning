
//pass pointer function

#include <iostream>
using namespace std;
void value(int *p);
int main()
{
    int a = 10;
    cout << "before passing a=" << a << endl;
    value(&a);
    cout << "after passing a=" << a << endl;
}
void value(int *p)

{
    *p = 20;
}
