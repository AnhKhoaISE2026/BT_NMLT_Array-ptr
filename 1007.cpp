
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
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
void SapXepGiamTheoMASV(SinhVien sv[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(sv[i].MASV, sv[j].MASV) < 0) {
                SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }

}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
