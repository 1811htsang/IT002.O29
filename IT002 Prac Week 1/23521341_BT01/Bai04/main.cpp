#include <iostream>
using namespace std;

struct phanso { int tuso, mauso; };

void input(phanso&);
void output(phanso);
int gcd(int, int);
void rutgon(phanso&);
phanso tong_phanso(phanso, phanso);
phanso hieu_phanso(phanso, phanso);
phanso nhan_phanso(phanso, phanso);
phanso chia_phanso(phanso, phanso);

int main() {
	phanso sample_data1, sample_data2;
	input(sample_data1);
	input(sample_data2);

	output(sample_data1);
	output(sample_data2);

	cout << "Tong 2 phan so la ";  output( tong_phanso(sample_data1, sample_data2) );
	cout << "Hieu 2 phan so la ";  output( hieu_phanso(sample_data1, sample_data2) );
	cout << "Nhan 2 phan so la ";  output( nhan_phanso(sample_data1, sample_data2) );
	cout << "Chia 2 phan so la ";  output( chia_phanso(sample_data1, sample_data2) );
}

void input(phanso& sample_input) {
	cout << "Nhap tu so: ";
	cin >> sample_input.tuso;
	cout << "Nhap mau so: ";
	cin >> sample_input.mauso;
}

void output(phanso sample_input) {
	cout << sample_input.tuso << "/" << sample_input.mauso << " " << endl;
}

int gcd(int num1, int num2) {
	if (num2 == 0) return num1;
	return gcd(num2, num1 % num2);
}

void rutgon(phanso& sample_input) {
	int gcd_mauso = gcd(sample_input.tuso, sample_input.mauso);
	sample_input.tuso /= gcd_mauso;
	sample_input.mauso /= gcd_mauso;
}

phanso tong_phanso(phanso sample_input1, phanso sample_input2) {
	phanso phanso_tong;
	phanso_tong.tuso = sample_input1.tuso * sample_input2.mauso + sample_input1.mauso * sample_input2.tuso;
	phanso_tong.mauso = sample_input1.mauso * sample_input2.mauso;
	rutgon(phanso_tong);
	return phanso_tong;
}

phanso hieu_phanso(phanso sample_input1, phanso sample_input2) {
	phanso phanso_hieu;
	phanso_hieu.tuso = sample_input1.tuso * sample_input2.mauso - sample_input1.mauso * sample_input2.tuso;
	phanso_hieu.mauso = sample_input1.mauso * sample_input2.mauso;
	rutgon(phanso_hieu);
	return phanso_hieu;
}

phanso nhan_phanso(phanso sample_input1, phanso sample_input2) {
	phanso phanso_nhan;
	phanso_nhan.tuso = sample_input1.tuso * sample_input2.tuso;
	phanso_nhan.mauso = sample_input1.mauso * sample_input2.mauso;
	rutgon(phanso_nhan);
	return phanso_nhan;
}

phanso chia_phanso(phanso sample_input1, phanso sample_input2) {
	phanso phanso_chia;
	phanso_chia.tuso = sample_input1.tuso * sample_input2.mauso;
	phanso_chia.mauso = sample_input1.mauso * sample_input2.tuso;
	rutgon(phanso_chia);
	return phanso_chia;
}

