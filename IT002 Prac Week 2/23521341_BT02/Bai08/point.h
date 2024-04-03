#pragma once
class point {
	private:
		float x;
		float y;
	public:
		void input();
		void output();
		float distance_calculate(point);
		float perimeter(point, point);
		float area(point, point);
		point center(point, point);
};

