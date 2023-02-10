
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
	char s[MAX];
	fgets(s,MAX,stdin);
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

	const int m = lena + 1,
			  n = lena + 1;

	char word_ctn[m][n]{};

	int iword, i;
	for (i = 0, iword = 0; i < lena; i++)
	{
		int x;
		if (a[i] == ' ')
		{
			for (i, x = 0; a[i] == ' ' && i < lena; i++, x++)
			{
				word_ctn[iword][x] = a[i];
			}
			iword++;
			i--;
		}
		else
		{
			for (i, x = 0; a[i] != ' ' && i < lena; i++, x++)
			{
				word_ctn[iword][x] = a[i];
			}
			iword++;
			i--;
		}
	}

	for (i = 0, iword = iword - 1; i < lena; i++, iword--)
	{
		int x, len;
		for (i, x = 0, len = myStrlen(word_ctn[iword], 0);
			 x < len;
			 i++, x++)
		{
			a[i] = word_ctn[iword][x];
		}
		i--;
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
