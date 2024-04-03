#include "sophuc.h"
#include <iostream>
#include <cmath>
using namespace std;

void sophuc::input() {
	cout << "Nhap phan thuc: ";
	cin >> this->thuc;
	cout << "Nhap phan ao: ";
	cin >> this->ao;
}

void sophuc::output() {
	cout << this->thuc << " + i * (" << this->ao << ") " << endl;
}

sophuc sophuc::tong(sophuc sample_input) {
	sophuc tong_output;
	tong_output.thuc = this->thuc + sample_input.thuc;
	tong_output.ao = this->ao + sample_input.ao;
	return tong_output;
}

sophuc sophuc::hieu(sophuc sample_input) {
	sophuc hieu_output;
	hieu_output.thuc = this->thuc - sample_input.thuc;
	hieu_output.ao = this->ao - sample_input.ao;
	return hieu_output;
}

sophuc sophuc::nhan(sophuc sample_input) {
	sophuc nhan_output;
	nhan_output.thuc = pow(this->thuc, 2) - pow(this->ao, 2);
	nhan_output.ao = this->thuc * sample_input.ao - this->ao * sample_input.thuc;
	return nhan_output;
}

sophuc sophuc::chia(sophuc sample_input) {
	sophuc chia_output;
	chia_output.thuc = (this->thuc * sample_input.thuc + this->ao * sample_input.ao) / (pow(sample_input.thuc, 2) + pow(this->ao, 2));
	chia_output.ao = (this->ao * sample_input.thuc - this->thuc * sample_input.ao) / (pow(sample_input.thuc, 2) + pow(this->ao, 2));
	return chia_output;
}