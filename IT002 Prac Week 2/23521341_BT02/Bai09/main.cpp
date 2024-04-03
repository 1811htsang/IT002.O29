#include <iostream>
#include <cmath>
#include <iomanip>
#include "circle.h"
#include "point.h"
using namespace std;

int main() {
	circle sample_data;
	sample_data.input();
	sample_data.output();
	cout << setprecision(4) << "Dien tich hinh tron la " << sample_data.area() << endl;
	cout << setprecision(4) << "Chu vi hinh tron la " << sample_data.perimeter();
}








