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
int ucln(int a, int b)
{
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a % b);
}
/*PhanSo Cong(PhanSo a, PhanSo b)
{
    int bcnn = (a.mauso * b.mauso) / ucln(a.mauso, b.mauso);
    PhanSo c;
    c.tuso = (a.tuso * bcnn / a.mauso) + (b.tuso * bcnn / b.mauso);
    c.mauso = bcnn;
    return c;
}*/
PhanSo ToiGian(PhanSo f) {
    int gcd = ucln(f.tuso, f.mauso);
    f.tuso /= gcd;
    f.mauso /= gcd;
    if (f.mauso < 0) {
        f.tuso *= -1;
        f.mauso *= -1;
    }
    return f;
}
PhanSo Chia(PhanSo a, PhanSo b)
{
    if (a.mauso == 0 || b.mauso == 0) std::cout << "";
    PhanSo c;
    c.tuso = a.tuso * b.mauso;
    c.mauso = a.mauso * b.tuso;
    return c;
}
void Xuat(PhanSo a)
{
    
    PhanSo PhanSoToiGian = ToiGian(a);
    if (PhanSoToiGian.mauso == 1) {
        std::cout << PhanSoToiGian.tuso << std::endl;
    }
    else {
        std::cout << PhanSoToiGian.tuso << "/" << PhanSoToiGian.mauso << std::endl;
    }
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Chia(a, b));
    return 0;
}
