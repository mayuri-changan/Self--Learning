//declare function &call it by reference

#include<iostream>
using namespace std;
void swap(int &a,int &b);//declare function
int main()
{
int a=10;
int b=20;

cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
swap(a,b);             //function call
cout<<"swap number is \n";
cout<<a<<b<<endl;
}
 void swap(int &a,int &b)//function defination

{
   int temp;
    temp=a;
    a=b;
    b=temp;
    

}



