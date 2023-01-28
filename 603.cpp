#include <iostream>

void Nhapmang(unsigned int a[], unsigned int n)
{
    int i = 0;
    while (n > 0)
    {
        std::cin >> a[i];
        i++;
        if (i >= n)
            break;
    }
}
void Odd_num_array(unsigned int a[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << a[i] << " ";
        }
    }
}
int main()
{
    unsigned int a[100], n;
    std::cin >> n;
    if (n < 100)
    {
        Nhapmang(a, n);
        Odd_num_array(a, n);
    }
    return 0;
}
