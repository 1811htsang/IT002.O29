#include "point.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void point::input() {
	cout << "Nhap toa do truc hoanh: ";
	cin >> this->x;
	cout << "Nhap toa do truc tung: ";
	cin >> this->y;
}

void point::output() {
	cout << setprecision(2) << "Toa do diem la (" << this->x << "; " << this->y << ")" << endl;
}

float point::distance_calculate(point sample_input) {
	return float(sqrt(pow(this->x - sample_input.x, 2) + pow(this->y - sample_input.y, 2)));
}

float point::perimeter(point sample_input1, point sample_input2) {
	
	float a = this->distance_calculate(sample_input1);
	float b = sample_input1.distance_calculate(sample_input2);
	float c = sample_input2.distance_calculate(*this);
	return float(a + b + c);
}

float point::area(point sample_input1, point sample_input2) {
	float a = this->distance_calculate(sample_input1);
	float b = sample_input1.distance_calculate(sample_input2);
	float c = sample_input2.distance_calculate(*this);
	float half_peri = (a + b + c) / 2;
	return sqrt(half_peri * (half_peri - a) * (half_peri - b) * (half_peri - c));
}

point point::center(point sample_input1, point sample_input2) {
	point central;
	central.x = (this->x + sample_input1.x + sample_input2.x) / 3;
	central.y = (this->y + sample_input1.y + sample_input2.y) / 3;
	return central;
}


