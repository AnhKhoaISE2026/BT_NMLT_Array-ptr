#include <iostream>

void Nhapmang(int a[], int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}
void Compare(int a[], int n)
{
    int max = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int j=0;j<n;j++){
        if (a[j] == max)
            dem++;
    }
    std::cout << max << std::endl
              << dem;
}

int main()
{
    int a[100], n;
    Nhapmang(a, n);
    Compare(a,n);
}
