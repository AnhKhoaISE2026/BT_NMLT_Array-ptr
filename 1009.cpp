#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

struct DATHUC{
    int n;
    double heso[101];
    unsigned int mu[101];
};
DATHUC z;

DATHUC *Nhap(){
    DATHUC *a = &z;
    cin >> a->n;
    for(int i = 0;i < a->n;i++){
        cin >> a->heso[i] ;
        cin >> a->mu[i];
    } 
    return a;
}

void Xuat(DATHUC &z){
    bool check = 0;
    for(int i = 0; i < z.n;i++){
        if (z.heso[i] == 0) continue;
        if (check == 1){
            if (z.heso[i] > 0) cout << "+";
        }
        if (z.mu[i] == 0) {
            if (z.heso[i] == 1) cout << 1;
            else if(z.heso[i] == -1) cout << -1;
                else cout << z.heso[i];
            check = 1;
        }
        if(z.mu[i] == 1) {
            if (z.heso[i] == 1 || z.heso[i] == -1){
                if (z.heso[i] == 1) cout << "x";
                else cout <<"-x";
            }
            else cout <<z.heso[i] <<"x";
            check = 1;
        }
        if (z.mu[i] != 0 && z.mu[i] != 1){
            if(z.heso[i] == 1 || z.heso[i] == -1){
                if (z.heso[i] == 1) cout << "x^" <<z.mu[i];
                else  cout << "-x^" <<z.mu[i];
            }
            else cout << z.heso[i] <<"x^" <<z.mu[i] ;
            check = 1;
        }
    }
    if (check == 0) cout << 0;
}

double TinhDaThuc(DATHUC B, double x){
    double s = 0;
    for(int j = 0;j < B.n;j++){
        s+=(B.heso[j] * pow(x,B.mu[j]));
    }

    return s;
}

int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}
