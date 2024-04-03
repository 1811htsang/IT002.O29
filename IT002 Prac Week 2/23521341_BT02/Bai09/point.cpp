#include "point.h"
#include <iomanip>
#include <iostream>
using namespace std;

void point::input() {
	cout << "Nhap toa do truc hoanh: ";
	cin >> this->x;
	cout << "Nhap toa do truc tung: ";
	cin >> this->y;
};
void point::output() {
	cout << setprecision(2) << "Toa do tam la (" << this->x << "; " << this->y << ")" << endl;
}
