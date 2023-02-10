#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX]{};
	fgets(s, MAX, stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

void StringReverse(char a[])
{
	const int lena = myStrlen(a, 0);

	for (int i = 0, x, k; i < lena; i++)
	{
		if (a[i] == ' ')
		{
			continue;
		}

		x = i;
		i += 1;
		for (i; a[i] != ' ' && i < lena; i++)
			;

		const int flag = (i + x) / 2;
		for (x, k = 1; x < flag; x++, k++)
		{
			swap(a[x], a[i - k]);
		}
	}
}

int myStrlen(char a[], int k)
{
	for (int i = k;; i++)
	{
		if (a[i] == '\0' || a[i] == '\n' || a[i] == '\r')
		{
			return i;
		}
	}
}

int myStrcmp(char a[], char b[])
{
	const int lena = myStrlen(a, 0);
	const int lenb = myStrlen(b, 0);

	for (int i = 0; i < lena || i < lenb; i++)
	{
		if (a[i] != b[i])
		{
			return a[i] - b[i];
		}
	}

	return 0;
}
