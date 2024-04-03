#include <iostream>
#include <cmath>
#include <iomanip>
#include "sophuc.h"
using namespace std;

int main() {
	sophuc sample_data1, sample_data2;
	sample_data1.input();
	sample_data2.input();

	cout << "so phuc 1: "; sample_data1.output();
	cout << "so phuc 2: "; sample_data2.output();

	cout << "Tong 2 so phuc la ";  sample_data1.tong(sample_data2).output();
	cout << "Hieu 2 so phuc la ";  sample_data1.hieu(sample_data2).output();
	cout << "Nhan 2 so phuc la ";  sample_data1.nhan(sample_data2).output();
	cout << "Chia 2 so phuc la ";  sample_data1.chia(sample_data2).output();
}