#include <bits/stdc++.h>
#include "point.h"
using namespace std;

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

