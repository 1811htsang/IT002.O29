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
        sub: Add or update submission
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
struct phan_so {
    int tu_so;
    int mau_so;
};
/*---------------------------------------------------------------------------------------------------------------*/
//Minor workspace 3: Identify lower functions
void input_phan_so(phan_so& ps) {
    cin >> ps.tu_so;
    cin >> ps.mau_so;
}
int GCD(int n, int m) {
    if (m == 0) return n;
    return GCD(m, n % m);
}
int lcm(int a, int b) {
    return a * b / GCD(a, b);
}
int so_sanh_phan_so(phan_so& ps1, phan_so& ps2) {
    int multi = lcm(ps1.mau_so, ps2.mau_so);
    ps1.tu_so *= multi / ps1.mau_so;
    ps2.tu_so *= multi / ps2.mau_so;
    ps1.mau_so = multi;
    ps2.mau_so = multi;
    if (ps1.tu_so > ps2.tu_so) return 1;
    else if (ps1.tu_so < ps2.tu_so) return -1;
    else return 0;
}

/*---------------------------------------------------------------------------------------------------------------*/
//Minor workspace 4: Identify global variables

/*---------------------------------------------------------------------------------------------------------------*/
int main() {
    //utilize cin|cout
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    /*---------------------------------------------------------------------------------------------------------------*/
    //Major workspace: Identify variables, Execute functions
    phan_so ps1, ps2;
    input_phan_so(ps1);
    input_phan_so(ps2);
    int result = so_sanh_phan_so(ps1, ps2);
    if (result == 1) cout << "Phan so 1 lon hon phan so 2" << endl;
    else if (result == -1) cout << "Phan so 1 nho hon phan so 2" << endl;
    else cout << "Phan so 1 bang phan so 2" << endl;
    /*---------------------------------------------------------------------------------------------------------------*/
    return 0;
}