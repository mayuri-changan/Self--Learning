//unary,ternary,logical,assignment
#include<iostream>
using namespace std;
int main()
{
    //unary
    int a=10;
    int b=20;
     
    cout<<a++<<endl;//post increment
    cout<<b++<<endl;
    cout<<--a<<endl;//post decrement
    cout<<--b<<endl;

    //logical
    cout<<(a && b)<<endl;//and
    cout<<(a||b)<<endl;//or 
    cout<<(a!=b)<<endl;//not

    //ternary
    int x=1;
    int y=2;
    int max=(x>y)?x:y;
    cout<<"max no is/n"<<max<<endl;

    //assignment 
    int f=50;
    int c=70;
    cout<<"f="<<a<<endl;
    cout<<"c="<<b<<endl;



}