#include <iostream>
using namespace std;

struct date {
    int day;
    int month;
    int year;
};

bool isLeapYear(int);
int daysInMonth(int, int);
void findPreDay(date&);
void inputDate(date&);
void outputDate(date);

int main() {
    date sample_data;
    inputDate(sample_data);
    findPreDay(sample_data);
    outputDate(sample_data);
}

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

void findPreDay(date& sample_input) {
    if (sample_input.day > 1) {
        sample_input.day--;
    }
    else if (sample_input.month > 1) {
        sample_input.month--;
        sample_input.day = daysInMonth(sample_input.month, sample_input.year);
    }
    else {
        sample_input.day = 31;
        sample_input.month = 12;
        sample_input.year--;
    }
}

void inputDate(date& sample_input) {
    cout << "Nhap day: ";
    cin >> sample_input.day;
    cout << "Nhap month: ";
    cin >> sample_input.month;
    cout << "Nhap year: ";
    cin >> sample_input.year;
}

void outputDate(date sample_input) {
    cout << "Ngay truoc do la ngay " << sample_input.day << "/" << sample_input.month << "/" << sample_input.year << endl;
}