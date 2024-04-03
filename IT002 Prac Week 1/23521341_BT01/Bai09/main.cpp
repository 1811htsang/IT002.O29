#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


struct point { float x, y; };
struct circle { point center; float radius; };
const float pi = 3.14;

void input(circle&);
void output(circle);
float area(circle);
float perimeter(circle);


int main() {
	circle sample_data;
	input(sample_data);
	output(sample_data);
	cout << setprecision(4) << "Dien tich hinh tron la " << area(sample_data) << endl;
	cout << setprecision(4) << "Chu vi hinh tron la " << perimeter(sample_data);
}

void input(circle& sample_input) {
	cout << "Nhap toa do truc hoanh: ";
	cin >> sample_input.center.x;
	cout << "Nhap toa do truc tung: ";
	cin >> sample_input.center.y;
	cout << "Nhap ban kinh: ";
	cin >> sample_input.radius;
}

void output(circle sample_input) {
	cout << setprecision(2) << "Toa do tam la (" << sample_input.center.x << "; " << sample_input.center.y << ")" << endl;
	cout << setprecision(2) << "Ban kinh " << sample_input.radius << endl;
}

float area(circle sample_input) {
	return pi * pow(sample_input.radius, 2);
}

float perimeter(circle sample_input) {
	return 2 * pi * sample_input.radius;
}




