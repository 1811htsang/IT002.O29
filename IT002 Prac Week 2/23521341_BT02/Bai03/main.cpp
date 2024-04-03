#include <iostream>
#include "phanso.h"
using namespace std;

int main() {
	phanso sample_data1, sample_data2;
	sample_data1.input();
	sample_data2.input();
	sample_data1.output();
	sample_data2.output();

	if (sample_data1.compare(sample_data2) == 1) cout << "phan so 1 lon nhat";
	else if (sample_data1.compare(sample_data2) == -1) cout << "phan so 2 lon nhat";
	else cout << "phan so bang nhau hoac khong xac dinh duoc phan so";
}