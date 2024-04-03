class cSoPhuc {
private:
    double thuc, ao;
public:
    void input();
    // thiếu constructor mặc định cSoPhuc();
    cSoPhuc(double, double);
    void output();
    double getThuc();
    double getAo();
    void setThuc(double);
    void setAo(double);
    cSoPhuc sum(cSoPhuc);
};