#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct point { int x, y; };

void input(point&);
void output(point);
float distance_calculate(point, point);

int main() {
	point sample_data1, sample_data2;
	input(sample_data1);
	input(sample_data2);
	cout << "Diem 1: " ;
	output(sample_data1);
	cout << "Diem 2: ";
	output(sample_data2);
	cout << "Khoang cach giua 2 diem la " << setprecision(2) << distance_calculate(sample_data1, sample_data2);
}

void input(point& sample_input) {
	cout << "Nhap toa do truc hoanh: ";
	cin >> sample_input.x;
	cout << "Nhap toa do truc tung: ";
	cin >> sample_input.y;
}

void output(point sample_input) {
	cout << "Toa do diem la (" << sample_input.x << "; " << sample_input.y << ")" << endl;
}

float distance_calculate(point sample_input1, point sample_input2) {
	return float(sqrt(pow(sample_input1.x - sample_input2.x, 2) + pow(sample_input1.y - sample_input2.y,2)));
}