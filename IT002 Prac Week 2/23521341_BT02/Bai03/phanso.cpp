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

int phanso::compare(phanso sample_input) {
	if (this->mauso == 0 || sample_input.mauso == 0) return 0;

	int temp = this->tuso;
	temp *= sample_input.mauso;
	sample_input.tuso *= this->mauso;

	if (temp > sample_input.tuso) return 1;
	else if (temp < sample_input.tuso) return -1;
	else return 0;
}