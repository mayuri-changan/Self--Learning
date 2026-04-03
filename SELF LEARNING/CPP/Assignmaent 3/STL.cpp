// 18. Assignments on STL Library
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    v.push_back(50);   // add element
    v.pop_back();      // remove last element

    cout << "Vector elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
