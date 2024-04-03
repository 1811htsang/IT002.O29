#include <bits/stdc++.h>
using namespace std;
#pragma once
class point {
    private:
        float x,y;
    public:
        point();
        point(float, float);
        void input();
        void output();
        float getX();
        float getY();
        void setX(float);
        void setY(float);
};

point::point() {
    x = 0;
    y = 0;
}

point::point(float x, float y) {
    this->x = x;
    this->y = y;
}

void point::input() {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
}

void point::output() {
    cout << "(" << x << ", " << y << ")";
}

float point::getX() {
    return x;
}

float point::getY() {
    return y;
}

void point::setX(float x) {
    this->x = x;
}

void point::setY(float y) {
    this->y = y;
}
