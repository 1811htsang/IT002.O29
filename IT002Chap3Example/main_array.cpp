#include <bits/stdc++.h>
#include "cArray.h"
using namespace std;

int main() {
    int* b;
    cArray a(b, 5);
    a.input();
    a.output();
    cout << "Number of elements equal to 5: " << a.countX(5) << endl;
    cout << "Is down arrange: " << a.isDownArrange() << endl;
    a.setUpArrange();
    a.output();
    return 0;
}