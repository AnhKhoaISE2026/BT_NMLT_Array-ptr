
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s	
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

void strSplf(char *s, char *s1)
{
	s1[0] = s[0];
	int i1 = 1;

	for (int i = 1; i < myStrlen(s, 0); i++)
	{
		int count = 0;

		for (int x = 0; x < i1; x++)
		{
			if (s[i] == s1[x])
			{
				count++;
			}
		}

		if (count == 0)
		{
			s1[i1] = s[i];
			i1++;
		}
	}
}

void DemKyTu(char *s)
{
	int lens = myStrlen(s, 0);
	char *s1 = new char[lens + 1];

	strSplf(s, s1);

	int lens1 = myStrlen(s1, 0);

	for (int i = 0; i < lens1; i++)
	{	
		int count = 0;

		for (int x = 0; x < lens; x++)
		{
			if (s1[i] == s[x])
			{
				count++;
			}
		}

		std::cout << s1[i] << ": " << count << std::endl;
	}

	delete[] s1;
}

int myStrlen(char *s, int k)
{
	for (int i = 0; true; i++)
	{
		if (s[i] == '\n' || s[i] == '\r' || s[i] == '\0')
		{
			return i;
		}
	}
}

int myStrcmp(char *s1, char *s2)
{
	int len1 = myStrlen(s1, 0);
	int len2 = myStrlen(s2, 0);

	if (len1 != len2)
	{
		return s1 - s2;
	}

	for (int i = 0; i < len1; i++)
	{
		if (s1[i] != s2[i])
		{
			return s1 - s2;
		}
	}

	return 0;
}
