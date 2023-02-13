#include <iostream>
#include <cmath>
#define MAXN 100
using namespace std;

struct PhanSo {
    int numerator;
    int denominator;
};
int ucln(int a,int b)
{
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a % b);
}

PhanSo simplifyFraction(PhanSo f) {
    int gcd = ucln(f.numerator, f.denominator);
    f.numerator /= gcd;
    f.denominator /= gcd;
    if (f.denominator < 0) {
        f.numerator *= -1;
        f.denominator *= -1;
    }
    return f;
}

void Nhap(PhanSo* fractions, int& n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> fractions[i].numerator >> fractions[i].denominator;
    }
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}



void Xuat(PhanSo* fractions, int n) {
    for (int i = 0; i < n; i++) {
        if (fractions[i].denominator == 0) {
            cout << "Khong thoa yeu cau bai toan" << endl;
            continue;
        }
        PhanSo simplified = simplifyFraction(fractions[i]);
        if (simplified.denominator == 1) {
            cout << simplified.numerator << endl;
        }
        else {
            cout << simplified.numerator << "/" << simplified.denominator << endl;
        }
    }
}
