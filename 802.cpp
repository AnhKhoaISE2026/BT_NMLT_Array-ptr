
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,MAX,stdin);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

void myStrcpy(char s[], int vt, char s1[], int k) {
	for (int i = 0; i < myStrlen(s1, 0); i++)
		s[i] = s1[i];
	s[myStrlen(s1, 0)] = '\0';

}

void ChenChuoiTaiVitriK(char s[], char s1[], int k) {
	int i = 0;
	int n = myStrlen(s, 0);
	int m = myStrlen(s1, 0);
	if (k > n) return;
	s[n + m] = '\0';
	for (int i = n - 1; i >= k; i--) {
		s[i + m] = s[i];
	}
	for (int i = 0; i < m; i++)
		s[k + i] = s1[i];
}


int myStrstr(char s[], char s1[]) {
	return 0;
}
int myStrlen(char s[], int k) {
	int len = 0;
	for (int i = k; s[i] != '\0'; i++)
		len++;
	return len;
}

void myMemmove(char s[], int vt, int k) {
	for (int i = vt + k; s[i] != '\0'; i++)
		s[i - k] = s[i];
	int n = myStrlen(s, 0);
	for (int i = 0; i < k; i++) {
		s[n - i - 1] = '\0';
	}
}

void Chuanhoa(char s[]) {
	char s1[MAX];
	s1[0] = ' ';
	s1[1] = '\0';
	ChenChuoiTaiVitriK(s, s1, 0);
	ChenChuoiTaiVitriK(s, s1, myStrlen(s, 0));
	for (int i = 0; i < myStrlen(s, 0); i++)
		if (s[i] == '.')
			ChenChuoiTaiVitriK(s, s1, i + 1);

	for (int i = 1; i < myStrlen(s, 0); ) {
		//cout << s << ".\n";
		if (s[i] == ' ' && s[i - 1] == ' ') {
			myMemmove(s, i, 1);
			continue;
		}
		if (s[i] == '.' && s[i - 1] == ' ' && i > 1) {
			myMemmove(s, i - 1, 1);
			continue;
		}
		i++;
	}
	myMemmove(s, 0, 1);
	myMemmove(s, myStrlen(s, 0) - 1, 1);
}
