// 5. Write Date and Time classes that allow you to add, subtract, read and print simple dates in 
// dd/mm/yyyy and time in hh:mm:ss formats. Use function overloading in your program. 
#include <iostream>
using namespace std;


class Date {
private:
    int day, month, year;

public:

    void read() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

   
    void print() {
        cout << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }

    
    Date operator+(int d) {
        Date temp = *this;
        temp.day += d;

     
        while (temp.day > 30) {
            temp.day -= 30;
            temp.month++;
        }
        while (temp.month > 12) {
            temp.month -= 12;
            temp.year++;
        }
        return temp;
    }


    Date operator-(int d) {
        Date temp = *this;
        temp.day -= d;

        while (temp.day <= 0) {
            temp.day += 30;
            temp.month--;
        }
        while (temp.month <= 0) {
            temp.month += 12;
            temp.year--;
        }
        return temp;
    }
};


class Time {
private:
    int hour, minute, second;

public:
  
    void read() {
        cout << "Enter time (hh mm ss): ";
        cin >> hour >> minute >> second;
    }

    
    void print() {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }

    Time operator+(int s) {
        Time temp = *this;
        temp.second += s;

        while (temp.second >= 60) {
            temp.second -= 60;
            temp.minute++;
        }
        while (temp.minute >= 60) {
            temp.minute -= 60;
            temp.hour++;
        }
        while (temp.hour >= 24) {
            temp.hour -= 24;
        }
        return temp;
    }

  
    Time operator-(int s) {
        Time temp = *this;
        temp.second -= s;

        while (temp.second < 0) {
            temp.second += 60;
            temp.minute--;
        }
        while (temp.minute < 0) {
            temp.minute += 60;
            temp.hour--;
        }
        while (temp.hour < 0) {
            temp.hour += 24;
        }
        return temp;
    }
};


int main() {
    Date d1, d2;
    Time t1, t2;

    
    d1.read();
    cout << "Original Date: ";
    d1.print();

    d2 = d1 + 5;  
    cout << "After Adding 5 days: ";
    d2.print();

    d2 = d1 - 3;   
    cout << "After Subtracting 3 days: ";
    d2.print();

    cout << endl;

  
    t1.read();
    cout << "Original Time: ";
    t1.print();

    t2 = t1 + 120;  
    cout << "After Adding 120 seconds: ";
    t2.print();

    t2 = t1 - 90; 
    cout << "After Subtracting 90 seconds: ";
    t2.print();

    return 0;
}
