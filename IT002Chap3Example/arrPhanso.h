#pragma once
#include "phanso.h"

class arrPhanso{
    private:
        int n;
        phanso* arr;
    public:
        arrPhanso();
        arrPhanso(int, phanso*);
        ~arrPhanso();
        void input();
        void output();
        void input_random();
        phanso maxPhanso();
        int countTusoPrime();
        void ascendingSort();
};