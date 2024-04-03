#include <iostream>
#include <cmath>
using namespace std;

struct sophuc { float thuc, ao; };

void input(sophuc&);
void output(sophuc);
sophuc tong(sophuc, sophuc);
sophuc hieu(sophuc, sophuc);
sophuc nhan(sophuc, sophuc);
sophuc chia(sophuc, sophuc);

int main() {
	sophuc sample_data1, sample_data2;
	input(sample_data1);
	input(sample_data2);

	output(sample_data1);
	output(sample_data2);

	cout << "Tong 2 so phuc la ";  output(tong(sample_data1, sample_data2));
	cout << "Hieu 2 so phuc la ";  output(hieu(sample_data1, sample_data2));
	cout << "Nhan 2 so phuc la ";  output(nhan(sample_data1, sample_data2));
	cout << "Chia 2 so phuc la ";  output(chia(sample_data1, sample_data2));
}

void input(sophuc& sample_input) {
	cout << "Nhap phan thuc: ";
	cin >> sample_input.thuc;
	cout << "Nhap phan ao: ";
	cin >> sample_input.ao;
}

void output(sophuc sample_input) {
	cout << sample_input.thuc << " + i * (" << sample_input.ao << ") " << endl;
}

sophuc tong(sophuc sample_input1, sophuc sample_input2) {
	sophuc tong_output;
	tong_output.thuc = sample_input1.thuc + sample_input2.thuc;
	tong_output.ao = sample_input1.ao + sample_input2.ao;
	return tong_output;
}

sophuc hieu(sophuc sample_input1, sophuc sample_input2) {
	sophuc hieu_output;
	hieu_output.thuc = sample_input1.thuc - sample_input2.thuc;
	hieu_output.ao = sample_input1.ao - sample_input2.ao;
	return hieu_output;
}

sophuc nhan(sophuc sample_input1, sophuc sample_input2) {
	sophuc nhan_output;
	nhan_output.thuc = pow(sample_input1.thuc,2)- pow(sample_input1.ao,2);
	nhan_output.ao = sample_input1.thuc * sample_input2.ao - sample_input1.ao * sample_input2.thuc;
	return nhan_output;
}

sophuc chia(sophuc sample_input1, sophuc sample_input2) {
	sophuc chia_output;
	chia_output.thuc = (sample_input1.thuc * sample_input2.thuc + sample_input1.ao * sample_input2.ao) / ( pow(sample_input2.thuc, 2) + pow(sample_input1.ao, 2) );
	chia_output.ao = (sample_input1.ao * sample_input2.thuc - sample_input1.thuc * sample_input2.ao) / ( pow(sample_input2.thuc, 2) + pow(sample_input1.ao, 2) );
	return chia_output;
}
