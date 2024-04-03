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

int gcd(int num1, int num2) {
	if (num2 == 0) return num1;
	return gcd(num2, num1 % num2);
}

void phanso::rutgon() {
	int gcd_mauso = gcd(this->tuso, this->mauso);
	this->tuso /= gcd_mauso;
	this->mauso /= gcd_mauso;
}

phanso phanso::tong(phanso sample_input) {
	phanso phanso_tong;
	phanso_tong.tuso = this->tuso * sample_input.mauso + this->mauso * sample_input.tuso;
	phanso_tong.mauso = this->mauso * sample_input.mauso;
	phanso_tong.rutgon();
	return phanso_tong;
}

phanso phanso::hieu(phanso sample_input) {
	phanso phanso_hieu;
	phanso_hieu.tuso = this->tuso * sample_input.mauso - this->mauso * sample_input.tuso;
	phanso_hieu.mauso = this->mauso * sample_input.mauso;
	phanso_hieu.rutgon();
	return phanso_hieu;
}

phanso phanso::nhan(phanso sample_input) {
	phanso phanso_nhan;
	phanso_nhan.tuso = this->tuso * sample_input.tuso;
	phanso_nhan.mauso = this->mauso * sample_input.mauso;
	phanso_nhan.rutgon();
	return phanso_nhan;
}

phanso phanso::chia(phanso sample_input) {
	phanso phanso_chia;
	phanso_chia.tuso = this->tuso * sample_input.mauso;
	phanso_chia.mauso = this->mauso * sample_input.tuso;
	phanso_chia.rutgon();
	return phanso_chia;
}
