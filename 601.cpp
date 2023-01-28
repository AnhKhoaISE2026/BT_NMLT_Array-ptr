#include <iostream>
using namespace std;
#define MAX 100

int GetTheFirstNum(int a){
    if (a < 10) return a;
    else{
    while (a >= 10){
        a /= 10;
    }
    return a;
    }
}

void Nhapmang(int *a, int n){
    int b;
    for (int i = 0; i < n; i++){
        cin >> b;
        a[i] = b;
    }
}

bool isBenford(int *a, int n){
    int count1 = 0; 
    int count4 = 0;
    for (int i = 0; i < n; i++){
        if (GetTheFirstNum(a[i]) == 1) count1 += 1;
        else if (GetTheFirstNum(a[i]) == 4) count4 += 1;
    }
    if ((count1 == 3)&&(count4 == 1)) return true;
    else return false;
}

int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
