#include <iostream>
using namespace std;

struct phanso { int tuso, mauso; };

void input(phanso&);
void output(phanso);
int compare(phanso, phanso);
int gcd(int, int);
int lcm(int, int);

int main() {
	phanso sample_data1, sample_data2;

	input(sample_data1);
	input(sample_data2);

	cout << "phan so 1: "; output(sample_data1);
	cout << "phan so 2: "; output(sample_data2);

	if (compare(sample_data1, sample_data2) == 1) cout << "phan so 1 la lon nhat";
	else if (compare(sample_data1, sample_data2) == -1) cout << "phan so 2 la lon nhat";
	else cout << "khong co phan so lon nhat";
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
	return gcd(num1, num1 % num2);
}

int lcm(int num1, int num2) {
	return num1 * num2 / gcd(num1, num2);
}

int compare(phanso sample_input1, phanso sample_input2) {
	sample_input1.tuso *= lcm(sample_input1.mauso, sample_input2.mauso) / sample_input1.mauso;
	sample_input2.tuso *= lcm(sample_input1.mauso, sample_input2.mauso) / sample_input2.mauso;
	if (sample_input1.tuso > sample_input2.tuso) return 1;
	else if (sample_input1.tuso < sample_input2.tuso) return -1;
	else return 0;
}