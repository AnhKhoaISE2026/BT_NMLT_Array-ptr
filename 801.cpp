#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

bool checkstr(char a[])
{
    for (int i = 0; i <= MAX; i++)
    {
        if (a[i] >= '0' && a[i] <= '9') {
            return false;
        }
        if (a[i] == '\0') break;
    }
    return true;
}
int main()
{
    char a[MAX];
    cin.getline(a, MAX);
    if (checkstr(a) == false) cout << "CHUOI KHONG HOP LE.";
    else cout << a;

}
