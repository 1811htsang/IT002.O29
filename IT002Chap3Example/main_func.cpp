#include <bits/stdc++.h>
#include "point.h"
#include "circle.h"
using namespace std;

int main() {
    circle c;
    c.input();
    c.output();
    cout << endl;
    cout << "Area = " << c.area() << endl;
    cout << "Perimeter = " << c.perimeter() << endl;
    return 0;
}
