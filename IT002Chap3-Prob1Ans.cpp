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
class cPhanso{
    private:
        int tu, mau;
    public:
        void input() {
            cin >> tu >> mau;
        };
        int gcd(int a, int b) {
            if (b == 0) return a;
            return gcd(b, a % b);
        };
        void rutgon(cPhanso a) {
            int x = gcd(a.tu, a.mau);
            a.tu /= x;
            a.mau /= x;
        };
        cPhanso sumphanso(cPhanso a, cPhanso b) {
            cPhanso c;
            c.tu = a.tu * b.mau + b.tu * a.mau;
            c.mau = a.mau * b.mau;
            rutgon(c);
            return c;
        };
        cPhanso subphanso(cPhanso a, cPhanso b) {
            cPhanso c;
            c.tu = a.tu * b.mau - b.tu * a.mau;
            c.mau = a.mau * b.mau;
            rutgon(c);
            return c;
        };
        cPhanso nhanphanso(cPhanso a, cPhanso b) {
            cPhanso c;
            c.tu = a.tu * b.tu;
            c.mau = a.mau * b.mau;
            rutgon(c);
            return c;
        };
        cPhanso chiaphanso(cPhanso a, cPhanso b) {
            cPhanso c;
            c.tu = a.tu * b.mau;
            c.mau = a.mau * b.tu;
            rutgon(c);
            return c;
        };
        void output() {
            cout << tu << "/" << mau << endl;
        };
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
    cPhanso a, b, tongc, hieuc, tichc, thuongc;
    a.input();
    b.input();
    tongc = tongc.sumphanso(a, b);
    hieuc = hieuc.subphanso(a, b);
    tichc = tichc.nhanphanso(a, b);
    thuongc = thuongc.chiaphanso(a, b);
    tongc.output();
    hieuc.output();
    tichc.output();
    thuongc.output();
    /*---------------------------------------------------------------------------------------------------------------*/
    return 0;
}