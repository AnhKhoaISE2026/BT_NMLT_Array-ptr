
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

void Nhap(char hoTenCanXoa[]){
    cin.getline(hoTenCanXoa,100);
}

void Nhap(SinhVien A[MAXN], int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin.getline(A[i].MASV, 10);
        cin.getline(A[i].HoTen, 100);
        cin.getline(A[i].NgaySinh, 12);
        cin >> A[i].GioiTinh;
        cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
        A[i].DTB = (A[i].DiemHoa + A[i].DiemLy + A[i].DiemToan)/3;
    }
}

int arr[100] ={};

void XoaTheoHoTen(SinhVien A[],int  n,char hoTenCanXoa[]){
    for(int i = 0; i < n ;i++){
        arr[i] = strcmp(A[i].HoTen,hoTenCanXoa);

    }
}

void Xuat(SinhVien A[], int n){
    int i = 0;
    while(i < n){
        
        if (arr[i] != 0)
        {cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" <<
        A[i].GioiTinh << "\t" << A[i].DiemToan << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t" <<setprecision(3) << A[i].DTB<<endl;}
        i++;
    }
}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
