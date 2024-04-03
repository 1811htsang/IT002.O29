#include <iostream>
#include "phanso.h"
using namespace std;


int main() {
	phanso sample_data;
	sample_data.input();
	sample_data.output();
	if (sample_data.isPosOrNega() == 1) cout << "phan so duong" << endl;
	else if (sample_data.isPosOrNega() == -1) cout << "phan so am" << endl;
	else cout << "phan so khong xac dinh" << endl;
	return 0;
}