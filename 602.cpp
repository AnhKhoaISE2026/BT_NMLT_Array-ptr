#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n, int y);
void NhapmangSNT(int a[], int &n)
{
    cin >> n;
}
int SoPhanTuChuaY(int a[], int n, int y)
{
    a[0] = 2;
    int z = 1;
    for (int i = 3;; i += 2)
    {
        int m = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                m++;
        }
        if (m == 0)
        {
            a[z] = i;
            z++;
        }
        if (z == n)
            break;
    }
    int m1 = 0;
    for (int i1 = 0; i1 < n; i1++)
    {
        while (a[i1] > 0)
        {
            int x;
            x = a[i1] % 10;
            a[i1] = a[i1] / 10;
            if (x == y)
            {
                m1++;
                break;
            }
        }
    }
    return m1;
}

int main()
{
    int a[MAX], n, y;
    cin >> y;
    NhapmangSNT(a, n);
    cout << SoPhanTuChuaY(a, n, y) << endl;
    ;
    return 0;
}
