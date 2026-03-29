// / 1. Using pointers, write your own functions for the following:  
// i. 
// String comparison  
// ii. 
// iii. 
// iv. 
// String concatenate  
// String copy  
// String length  
// Note: Do not include in your program and implement Delete operator in your 
// program. 

#include <iostream>
using namespace std;

// i. String Length
int myStrLen(char *str) {
    int len = 0;
    while (*(str + len) != '\0') {
        len++;
    }
    return len;
}

// ii. String Copy
void myStrCopy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// iii. String Concatenate
void myStrCat(char *dest, char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// iv. String Compare
int myStrCmp(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char *str1 = new char[100];
    char *str2 = new char[100];
    char *copyStr = new char[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Length
    cout << "Length of first string: " << myStrLen(str1) << endl;

    // Copy
    myStrCopy(copyStr, str1);
    cout << "Copied string: " << copyStr << endl;

    // Concatenate
    myStrCat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    // Compare
    int result = myStrCmp(str1, str2);
    if (result == 0)
        cout << "Strings are equal" << endl;
    else if (result > 0)
        cout << "First string is greater" << endl;
    else
        cout << "Second string is greater" << endl;

    // Delete operator
    delete[] str1;
    delete[] str2;
    delete[] copyStr;

    return 0;
}
