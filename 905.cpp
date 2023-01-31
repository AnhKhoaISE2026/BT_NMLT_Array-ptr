
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrlen(char* s);
char* myStrcat(char* s1, char* s2);

int main()
{
	char* s1 = NULL, * s2 = NULL;
	s1 = new char[MAX];
	s2 = new char[MAX];
	//gets(s1);
	//gets(s2);
	cin.getline(s1, MAX - 1);
	cin.getline(s2, MAX - 1);
	char* s = myStrcat(s1, s2);
	puts(s);
	return 0;
}

int myStrlen(char* s)
{
	int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}

char* myStrcat(char* s1, char* s2)
{
	char* p = s1 + myStrlen(s1);
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	return s1;
}
