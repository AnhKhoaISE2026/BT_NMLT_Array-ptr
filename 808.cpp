
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	fgets(s,MAX,stdin);
	fgets(s1,MAX,stdin);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{

ChenChuoiTaiVitriK(s, s1, k);
		cout << s;
	}
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k)
{
	const int len_s = myStrlen(s, 0),
			  len_s1 = myStrlen(s1, 0);

	for (int a = len_s - 1, b = len_s + len_s1 - 1; a >= k; a--, b--)
	{
		s[b] = s[a];
	}
	for (int a = k, b = 0; b < len_s1; a++, b++)
	{
		s[a] = s1[b];
	}
}

int myStrlen(char s[], int k)
{
	for (int i = 0;; i++)
	{
		if (s[i] == '\0' || s[i] == '\n' || s[i] == '\r')
		{
			return i;
		}
	}
}
