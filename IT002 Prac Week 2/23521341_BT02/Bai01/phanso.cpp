#include "phanso.h"
#include <iostream>
using namespace std;

void phanso::input() {
	cout << "Nhap tu so: ";
	cin >> this->tuso;
	cout << "Nhap mau so: ";
	cin >> this->mauso;
}

void phanso::output() {
	cout << this->tuso << "/" << this->mauso << endl;
}

int phanso::isPosOrNega() {
	if (this->tuso * this->mauso > 0) return 1;
	if (this->tuso * this->mauso < 0) return -1;
	return 0;
}