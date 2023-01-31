#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char* s);
int main()
{
	char* s;
	s = new char[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s, MAX - 1);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}
void Erasing(char *s);
void Chuanhoa(char* s)
{
    Erasing(s);
	s[0] = toupper(s[0]);
    for (int i = 1; i <= strlen(s)-1; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    for (int i = 1; i <= strlen(s) - 1; i++)
        if (s[i] == ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
            s[i + 1] -= 32;
}
void Erasing(char* s)
{
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            for (int j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            s[n - 1] = NULL;
            i--;
            n--;
        }
        else break;
    }


    //Xóa khoảng trắng cuối xâu
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            s[i] = NULL;
            n--;
        }
        else break;
    }

    //Xóa khoảng trắng không hợp lệ(khoảng trắng bị thừa)
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == s[i + 1]) {
            for (int j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            s[n - 1] = NULL;
            i--;
            n--;
        }
    }
}

