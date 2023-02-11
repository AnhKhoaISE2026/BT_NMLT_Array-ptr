
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1,MAX,stdin);
	fgets(s2,MAX,stdin);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}
int myStrlen(char s[], int k)
{
    k = 0;
	while (s[k] != '\0')
		k++;
	return k;
}
int myStrcmp(char s1[], char s2[])
{
    int dem=0;
    if (myStrlen(s1,0)>myStrlen(s2,0)){
        return 1;
    }
    else if (myStrlen(s1,0)<myStrlen(s2,0)){
        return -1;
    }
    else {
        for (int i=0; i<myStrlen(s1,0);i++){
            if ((int)s1[i]==(int)s2[i]){
                continue;
            }
            else if ((int)s1[i]<(int)s2[i]) return -1;
            else return 1;
        }
        return 0;
    }
}
