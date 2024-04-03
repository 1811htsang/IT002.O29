#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;

void point::input() {
	cout << "Nhap toa do truc hoanh: ";
	cin >> this->x;
	cout << "Nhap toa do truc tung: ";
	cin >> this->y;
}

void point::output() {
	cout << "Toa do diem la (" << this->x << "; " << this->y << ")" << endl;
}

float point::distance_calculate(point sample_input) {
	return float(sqrt(pow(this->x - sample_input.x, 2) + pow(this->y - sample_input.y, 2)));
}
