
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhapsv(SinhVien& sv)
{

    cin >> sv.MASV;
    cin.ignore();
    cin.getline(sv.HoTen, 100);
    cin.getline(sv.NgaySinh, 12);
    cin >> sv.GioiTinh;
    if (sv.GioiTinh == 'M' || sv.GioiTinh == 'F')
    {
        cin >> sv.DiemToan >> sv.DiemLy >> sv.DiemHoa;
        sv.DTB = (sv.DiemToan + sv.DiemLy + sv.DiemHoa) / 3;
    }
}
void Nhap(SinhVien sv[], int& n) 
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Nhapsv(sv[i]);
    }
}

void Xuatsv(SinhVien &sv)
{

    cout << sv.MASV << "\t" << sv.HoTen << "\t" << sv.NgaySinh << "\t" << sv.GioiTinh << "\t" << sv.DiemToan << "\t" << sv.DiemLy << "\t" << sv.DiemHoa << "\t" << setprecision(3) << sv.DTB << endl;
}

void Xuat(SinhVien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuatsv(sv[i]);
    }
}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
