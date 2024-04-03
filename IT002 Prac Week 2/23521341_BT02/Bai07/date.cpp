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

void date::findPreviousDay() {
    if (this->day > 1) {
        this->day--;
    }
    else if (this->month > 1) {
        this->month--;
        this->day = daysInMonth(this->month, this->year);
    }
    else {
        this->day = 31;
        this->month = 12;
        this->year--;
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
