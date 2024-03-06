/*---------------------------------------------------------------------------------------------------------------
    -Instruction to upload code to Github
        git init => git add -A => git commit -m => git push (-f) origin main
    -Instruction to commit code to Github
        feat: Add new feature
        fix: Fix bug
        refactor: Refactor code
        style: Style code
        test: Test code
        perf: Improve performance
        docs: Add documents
        chore: Add chore
        build: Change build process
        ci: Change CI process
        revert: Revert code
        note: Add or update notes
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
class cPhanso {
    public:
        int tu, mau;

        int GCD(int n, int m) {
            if (m == 0) return n;
            return GCD(m, n % m);
        }
        void simple(cPhanso& sample_object) {
            int gcd = GCD(sample_object.tu, sample_object.mau);
            sample_object.tu /= gcd;
            sample_object.mau /= gcd;
        };
};
class cPhanso_List {
    public:
        cPhanso* list;
        int num;

        void input() {
            cin >> num;
            list = multiple_target_dynamic_allo<cPhanso>(num);
            for (int i = 0; i < num; i++) {
                cin >> list[i].tu >> list[i].mau;
            }
        }
        void MaxOfList() {
            cPhanso max = list[0];
            for (int i = 1; i < num; i++) {
                if (max.tu * list[i].mau < max.mau * list[i].tu) {
                    max = list[i];
                }
            }
            cout << max.tu << "/" << max.mau;
        }
        void output() {
            for (int i = 0; i < num; i++) {
                cout << list[i].tu << "/" << list[i].mau << " ";
            }
        }
};
/*---------------------------------------------------------------------------------------------------------------*/
//Minor workspace 3: Identify lower functions

/*---------------------------------------------------------------------------------------------------------------*/
//Minor workspace 4: Identify global variables

/*---------------------------------------------------------------------------------------------------------------*/
int main() {
    //utilize cin|cout
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    /*---------------------------------------------------------------------------------------------------------------*/
    //Major workspace: Identify variables, Execute functions
    cPhanso_List a;
    a.input();
    cout << endl;
    a.MaxOfList();
    cout << endl;
    a.output();
    /*---------------------------------------------------------------------------------------------------------------*/
    return 0;
}