/*---------------------------------------------------------------------------------------------------------------
    Instruction to upload code to Github
    git init => git add -A => git commit -m => git push (-f) origin main
---------------------------------------------------------------------------------------------------------------*/
//Library space: Identify library 
#include <bits/stdc++.h> //Main library 
using namespace std; //Namespace
/*---------------------------------------------------------------------------------------------------------------*/
//Definiton space: Identify definiton 
#define num_MAX 300
#define MAXN 10000
typedef int* contro_int;
typedef int& thamchieu_int;
/*---------------------------------------------------------------------------------------------------------------*/
//Minor workspace 1: Identify template 
template <typename T> T* multiple_target_dynamic_allo(int num) {
    return new T[num];
}
template <typename T> T* single_targe_dynamic_allo() {
    return new T;
}
template <typename T> void erase_multiple_target_dynamic_allo(T* ptr) {
    delete[] ptr;
    ptr = nullptr;
}
template <typename T> void erase_single_target_dynamic_allo(T* ptr) {
    delete ptr;
    ptr = nullptr;
}
/*---------------------------------------------------------------------------------------------------------------*/
//Minor workspace 2: Identify struct, class
class cSoPhuc {
    private:
        int heso_thuc, heso_ao;
    public:
        void nhap(cSoPhuc& so_phuc) {
            cin >> so_phuc.heso_thuc >> so_phuc.heso_ao;
        };
        void xuat(cSoPhuc so_phuc) {
            cout << so_phuc.heso_thuc << " i" << so_phuc.heso_ao << endl;
        };
        void cong(cSoPhuc so_phuc_1, cSoPhuc so_phuc_2) {
            cSoPhuc so_phuc;
            so_phuc.heso_thuc = so_phuc_1.heso_thuc + so_phuc_2.heso_thuc;
            so_phuc.heso_ao = so_phuc_1.heso_ao + so_phuc_2.heso_ao;
            xuat(so_phuc);
        };
};
/*---------------------------------------------------------------------------------------------------------------*/
//Minor workspace 3: Identify lower functions

/*---------------------------------------------------------------------------------------------------------------*/
//Minor workspace 4: Identify global variables
unsigned long long int odd_num = 0, even_num = 0;
/*---------------------------------------------------------------------------------------------------------------*/
int main() {
    //utilize cin|cout
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    /*---------------------------------------------------------------------------------------------------------------*/
    //Major workspace: Identify variables, Execute functions
    // cSoPhuc so_phuc1;
    // so_phuc1.nhap(so_phuc1);
    // cSoPhuc so_phuc2;
    // so_phuc2.nhap(so_phuc2);
    // so_phuc1.cong(so_phuc1, so_phuc2);
    
    unsigned long long int start = 0, end = 1000;
    auto start_time = chrono::high_resolution_clock::now();
    thread t1([&]() {
        for (unsigned long long int i = start; i < end; i++) {
            if (i % 2 == 0) {
                even_num += i;
            }
        }
    });
    thread t2([&]() {
        for (unsigned long long int i = start; i < end; i++) {
            if (i % 2 == 0) {
                odd_num += i;
            }
        }
    });
    
    t1.join();
    t2.join();
    auto end_time = chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    cout << "Time: " << chrono::duration_cast<chrono::nanoseconds>(time).count() / pow(10,6) << " s" << endl;
    cout << "Even num: " << even_num << endl;
    cout << "Odd num: " << odd_num << endl;
    
    /*---------------------------------------------------------------------------------------------------------------*/
    return 0;
}


