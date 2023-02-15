#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

struct DATHUC{
    int n;
    double heso[101];
    int mu[101];
};

DATHUC *Nhap(){

    DATHUC *a ; a = new DATHUC();
    cin >> a->n;
    for(int i = 0;i < a->n;i++){
        cin.ignore();
        cin >> a->heso[i] ;
        cin >> a->mu[i];
    } 
    return a;
}

void Xuat(DATHUC z){
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

DATHUC Tong2DaThuc(DATHUC *a, DATHUC *b){
    DATHUC *c;
    c = new DATHUC;
    int dem=0,i1=0,i2=0;
    while(a->n != 0 || b->n != 0){
        
        if (b->n == 0 || b->mu[i2] < a->mu[i1]){
                c->heso[dem] = a->heso[i1];
                c->mu[dem] = a->mu[i1];
                i1++;
                dem++;
                a->n--;
            }
        else{
            if ( a->n == 0 || a->mu[i1] < b->mu[i2]){
            c->heso[dem] = b->heso[i2];
            c->mu[dem] = b->mu[i2];
            i2++;
            dem++;
            b->n--;
        }
            else{
                c->heso[dem] = a->heso[i1] + b->heso[i2];
                c->mu[dem] = a->mu[i1] ;
                dem++;
                i1++;
                i2++;
                a->n--;
                b->n--;
            }
        }
        c->n = dem ;
    }
    return *c;
}

int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}

