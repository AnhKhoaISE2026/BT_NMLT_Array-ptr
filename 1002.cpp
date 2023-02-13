#include <iostream>

struct PhanSo
{
    int tuso;
    int mauso;
};
void Nhap(PhanSo &a)
{
    std::cin >> a.tuso >> a.mauso;
    if (a.mauso < 0) {
        a.tuso /= -1;
        a.mauso /= -1;
    }
}
PhanSo Nhap(void)
{
    PhanSo b;
    std::cin >> b.tuso >> b.mauso;
    if (b.mauso < 0) {
        b.tuso /= -1;
        b.mauso /= -1;
    }
    return b;
}
int SoSanh(PhanSo a, PhanSo b)
{
    int ans = a.tuso * b.mauso - a.mauso * b.tuso;
    return ans;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
