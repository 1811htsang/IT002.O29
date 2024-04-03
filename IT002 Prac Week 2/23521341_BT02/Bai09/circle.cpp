#include "circle.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const float pi = 3.14;
void circle::input() {
	center.input();
	cout << "Nhap ban kinh: ";
	cin >> this->radius;
}

void circle::output() {
	center.output();
	cout << setprecision(2) << "Ban kinh " << this->radius << endl;
}

float circle::area() {
	return pi * pow(this->radius, 2);
}

float circle::perimeter() {
	return 2 * pi * this->radius;
}
