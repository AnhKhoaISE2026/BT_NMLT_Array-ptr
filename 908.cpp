#include <iostream>

void Nhapmang(float a[][100], int& m, int& n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }
}

void TimMax(float a[][100], int m, int n)
{
    float max;
    for (int j = 0; j < n; j++) {
        max = a[0][j];
        for (int i = 0; i < m; i++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        std::cout << "Gia tri lon nhat tren cot " << j << " la: " << max<<std::endl;
    }
}
int main()
{
    float a[100][100]; int m, n;
    std::cin >> m >> n;
    if (n < 100 && m<100)
    {
        Nhapmang(a, m, n);
        TimMax(a, m, n);
    }
    return 0;
}
