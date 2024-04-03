#include <iostream>
#include <iomanip>
#include "point.h"
using namespace std;

int main() {
	point point1, point2;
	point1.input();
	point2.input();
	point1.output();
	point2.output();

	cout << "Khoang cach giua 2 diem la " << setprecision(4) << point1.distance_calculate(point2) << endl;
}