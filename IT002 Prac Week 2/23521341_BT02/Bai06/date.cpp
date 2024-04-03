#include "date.h"
#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2)
        return isLeapYear(year) ? 29 : 28;
    else
        return 31;
}

void date::findNextDay() {
    if (this->day < daysInMonth(this->month, this->year)) {
        this->day++;
    }
    else if (this->month < 12) {
        this->day = 1;
        this->month++;
    }
    else {
        this->day = 1;
        this->month = 1;
        this->year++;
    }
}

void date::inputDate() {
    cout << "Nhap day: ";
    cin >> this->day;
    cout << "Nhap month: ";
    cin >> this->month;
    cout << "Nhap year: ";
    cin >> this->year;
}

void date::outputDate() {
    cout << "ngay " << this->day << "/" << this->month << "/" << this->year << endl;
}
