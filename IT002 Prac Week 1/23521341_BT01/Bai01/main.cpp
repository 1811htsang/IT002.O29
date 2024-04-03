#include <iostream>
using namespace std;

struct phanso {
	int tuso, mauso;
};

void input(phanso&);
void output(phanso);
int isPosOrNegaFrac(phanso);

int main() {
	phanso sample_data;
	input(sample_data);
	output(sample_data);
	if (isPosOrNegaFrac(sample_data) == 1) cout << "la phan so duong";
	else if (isPosOrNegaFrac(sample_data) == -1) cout << "la phan so am";
	else cout << "la phan so khong xac dinh";
}

void input(phanso& sample_input) {
	cout << "Nhap tu so: "; 
	cin >> sample_input.tuso;
	cout << "Nhap mau so: ";
	cin >> sample_input.mauso;
}

void output(phanso sample_input) {
	cout << sample_input.tuso << "/" << sample_input.mauso << " ";
}

int isPosOrNegaFrac(phanso sample_input) {
	if (sample_input.tuso * sample_input.mauso > 0) return 1;
	else if (sample_input.tuso * sample_input.mauso < 0) return -1;
	else return 0;
}