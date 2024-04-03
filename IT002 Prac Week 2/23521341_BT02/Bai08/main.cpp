#include <iostream>
#include <cmath>
#include <iomanip>
#include "point.h"
using namespace std;

int main() {
	point sample_data1, sample_data2, sample_data3;
	sample_data1.input();
	sample_data2.input();
	sample_data3.input();

	cout << "Diem 1: ";
	sample_data1.output();

	cout << "Diem 2: ";
	sample_data2.output();

	cout << "Diem 3: ";
	sample_data3.output();

	cout << "Chu vi tam giac la " << setprecision(2) << sample_data1.perimeter(sample_data2, sample_data3) << endl;
	cout << "Dien tich tam giac la " << setprecision(2) << sample_data1.area(sample_data2, sample_data3) << endl;
	cout << "Diem trong tam: "; sample_data1.center(sample_data2, sample_data3).output();
}












