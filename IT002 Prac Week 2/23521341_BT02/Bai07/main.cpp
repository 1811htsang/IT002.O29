#include <iostream>
#include "date.h"
using namespace std;

int main() {
	date sample_data;
	sample_data.inputDate();
	sample_data.outputDate();
	cout << "ngay truoc do la "; sample_data.findPreviousDay(); sample_data.outputDate();
}