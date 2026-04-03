// 16. Assignments on files doing different operations
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");

    fout << "Hello, this is file handling in C++";

    fout.close();
    cout << "Data written to file successfully!";
    return 0;
}

