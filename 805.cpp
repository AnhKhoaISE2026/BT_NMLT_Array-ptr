#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	fgets(s, MAX, stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

void DemTieng(char *s1)
{
	const int len_s = myStrlen(s1, 0);
	char s[(len_s + 1) / 2][len_s + 1]{};

	int iword = 0;
	for (int i = 0, x = 0; i < len_s; i++)
	{
		if (s1[i] != ' ' && x < len_s)
		{
			for (x = i; x < len_s; x++)
			{
				if (s1[x] == ' ' || s1[x] == '\n' || s1[x] == '\r')
				{
					iword++;
					i = x;
					break;
				}
				s[iword][x - i] = s1[x];
			}
		}
	}

	for (int i = 0; i <= iword; i++)
	{
		if (s[i][0] != '\0')
		{
			int count = 1;
			for (int x = i + 1; x < iword; x++)
			{
				if (myStrcmp(s[i], s[x]) == 0)
				{
					count++;
					s[x][0] = '\0';
				}
			}

			cout << s[i] << ": " << count << endl;
		}
	}
}

int myStrcmp(char *s1, char *s2)
{
	const int len1 = myStrlen(s1, 0);
	const int len2 = myStrlen(s2, 0);

	for (int i = 0; i < len1 || i < len2; i++)
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
	}

	return 0;
}

int myStrlen(char *s, int k)
{
	for (int i = 0;; i++)
	{
		if (s[i] == '\0' || s[i] == '\n' || s[i] == '\r')
		{
			return i;
		}
	}
}
