#include <iostream>
#include <cmath>
#define MAXN 100
using namespace std;

struct PhanSo {
    int tuso;
    int mauso;
};
int ucln(int a,int b)
{
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a % b);
}

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

void Nhap(PhanSo* fractions, int& n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> fractions[i].tuso >> fractions[i].mauso;
    }
}


void Xuat(PhanSo* fractions, int n) {
    for (int i = 0; i < n; i++) {
        if (fractions[i].mauso == 0) {
            cout << "Khong thoa yeu cau bai toan" << endl;
            continue;
        }
        PhanSo PhanSoToiGian = ToiGian(fractions[i]);
        if (PhanSoToiGian.mauso == 1) {
            cout << PhanSoToiGian.tuso << endl;
        }
        else {
            cout << PhanSoToiGian.tuso << "/" << PhanSoToiGian.mauso << endl;
        }
    }
}

int main() {
    int n;
    PhanSo a[100];
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}
