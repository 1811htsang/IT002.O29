#include <iostream>
#include "date.h"
using namespace std;

int main() {
	date sample_data;
	sample_data.inputDate();
	sample_data.outputDate();
	cout << "ngay tiep theo la "; sample_data.findNextDay();sample_data.outputDate();
}