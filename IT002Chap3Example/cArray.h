#pragma once
#include <bits/stdc++.h>
using namespace std;

class cArray {
    private:
        int *a;
        int n;
    public:
        cArray();
        cArray(int);
        cArray(int*, int);
        cArray(const cArray&);
        ~cArray();
        void input();
        void output();
        int getN();
        void setN(int);
        int* getA();
        void setA(int*, int);
        int countX(int);
        bool isDownArrange();
        void setUpArrange();
        void inputRandom();
};

cArray::cArray() {
    n = 0;
    a = NULL;
}

cArray::cArray(int n) {
    this->n = n;
    a = new int[n];
}

cArray::cArray(int *a, int n) {
    this->n = n;
    this->a = new int[n];
    for (int i = 0; i < n; i++) {
        this->a[i] = a[i];
    }
}

cArray::cArray(const cArray &arr) {
    n = arr.n;
    a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = arr.a[i];
    }
}

cArray::~cArray() {
    delete[] a;
}

void cArray::input() {
    cout << "Enter n: ";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }
}

void cArray::output() {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int cArray::getN() {
    return n;
}

void cArray::setN(int n) {
    this->n = n;
}

int* cArray::getA() {
    return a;
}

void cArray::setA(int *a, int n) {
    this->n = n;
    this->a = new int[n];
    for (int i = 0; i < n; i++) {
        this->a[i] = a[i];
    }
}

int cArray::countX(int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    return count;
}

bool cArray::isDownArrange() {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            return false;
        }
    }
    return true;
}

void cArray::setUpArrange() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

void cArray::inputRandom() {
    cout << "Enter n: ";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100 + 600;
    }
}


