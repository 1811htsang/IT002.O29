#pragma once
#include "point.h"
class circle {
	private:
		point center; 
		float radius;
	public:
		void input();
		void output();
		float area();
		float perimeter();
};

