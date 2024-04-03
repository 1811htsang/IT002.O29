#include "point.h"
#include <bits/stdc++.h>
using namespace std;
#pragma once
class circle {
    private:
        point O;
        float r;
        // static const float PI = 3.14;
    public:
        circle();
        circle(point, float);
        void input();
        void output();
        point getO();
        float getR();
        void setO(point);
        void setR(float);
        float area();
        float perimeter();
};

circle::circle() {
    O = point(0, 0);
    r = 0;
}

circle::circle(point O, float r) {
    this->O = O;
    this->r = r;
}

void circle::input() {
    cout << "Enter O: " << endl;
    O.input();
    cout << "Enter r: ";
    cin >> r;
}

void circle::output() {
    cout << "O: ";
    O.output();
    cout << ", r = " << r;
}

point circle::getO() {
    return O;
}

float circle::getR() {
    return r;
}

void circle::setO(point O) {
    this->O = O;
}

void circle::setR(float r) {
    this->r = r;
}

float circle::area() {
    return 3.14 * r * r;
}

float circle::perimeter() {
    return 2 * 3.14 * r;
}
