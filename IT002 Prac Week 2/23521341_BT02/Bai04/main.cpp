#include <iostream>
#include "phanso.h"
using namespace std;

int main() {
	phanso sample_data1, sample_data2;
	sample_data1.input();
	sample_data2.input();

	cout << "phan so 1: "; sample_data1.output();
	cout << "phan so 2: "; sample_data2.output();

	cout << "Tong 2 phan so la ";  sample_data1.tong(sample_data2).output();
	cout << "Hieu 2 phan so la ";  sample_data1.hieu(sample_data2).output();
	cout << "Nhan 2 phan so la ";  sample_data1.nhan(sample_data2).output();
	cout << "Chia 2 phan so la ";  sample_data1.chia(sample_data2).output();
}