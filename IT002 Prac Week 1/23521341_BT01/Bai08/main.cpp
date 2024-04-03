#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct point { float x, y; };

void input(point&);
void output(point);
float distance_calculate(point, point);
float perimeter(point, point, point);
float area(point, point, point);
point center(point, point, point);

int main() {
	point sample_data1, sample_data2, sample_data3;
	input(sample_data1);
	input(sample_data2);
	input(sample_data3);

	cout << "Diem 1: ";
	output(sample_data1);

	cout << "Diem 2: ";
	output(sample_data2);

	cout << "Diem 3: ";
	output(sample_data3);

	cout << "Chu vi tam giac la " << setprecision(2) << perimeter(sample_data1, sample_data2, sample_data3) << endl;
	cout << "Dien tich tam giac la " << setprecision(2) << area(sample_data1, sample_data2, sample_data3) << endl;
	cout << "Diem trong tam: ";
	output(center(sample_data1, sample_data2, sample_data3));
}

void input(point& sample_input) {
	cout << "Nhap toa do truc hoanh: ";
	cin >> sample_input.x;
	cout << "Nhap toa do truc tung: ";
	cin >> sample_input.y;
}

void output(point sample_input) {
	cout << setprecision(2) << "Toa do diem la (" << sample_input.x << "; " << sample_input.y << ")" << endl;
}

float distance_calculate(point sample_input1, point sample_input2) {
	return float(sqrt(pow(sample_input1.x - sample_input2.x, 2) + pow(sample_input1.y - sample_input2.y, 2)));
}

float perimeter(point sample_input1, point sample_input2, point sample_input3) {
	float a = distance_calculate(sample_input1, sample_input2);
	float b = distance_calculate(sample_input2, sample_input3);
	float c = distance_calculate(sample_input3, sample_input1);
	return float(a + b + c);
}

float area(point sample_input1, point sample_input2, point sample_input3) {
	float a = distance_calculate(sample_input1, sample_input2);
	float b = distance_calculate(sample_input2, sample_input3);
	float c = distance_calculate(sample_input3, sample_input1);
	float half_peri = (a + b + c) / 2;
	return sqrt(half_peri * (half_peri - a) * (half_peri - b) * (half_peri - c));
}

point center(point sample_input1, point sample_input2, point sample_input3) {
	point central;
	central.x = (sample_input1.x + sample_input2.x + sample_input3.x) / 3;
	central.y = (sample_input1.y + sample_input2.y + sample_input3.y) / 3;
	return central;
}


