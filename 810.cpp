
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	 
         fgets(s1,MAX,stdin);
	 fgets(s2,MAX,stdin);
	bool kt = myStrcat(s1, s2);
if (kt==true) 
	{
		
		int l1=myStrlen(s1);
		int l2=myStrlen(s2);
		char *s;
		s=new char [l1+l2];

		int tmp=0;
		for(int i = 0; i<l1+l2; i++)
		{
			if (i<l1-1)
				s[i]=s1[i];
			else 
			{
				s[i]=s2[tmp];
				tmp++;
			}
		}
		cout<<s;
	}
	else
	{
		cout<<"Khong noi duoc. Khong du bo nho.";
		return 0;
	
	
	}
}
int myStrlen(char s[])
{
	int count= 0;
	for(int i = 0; s[i]!= '\0'; i++)
	count++;
	return count;
}
bool myStrcat(char s1[], char s2[])
{
	if ((myStrlen(s1) + myStrlen( s2))>=MAX) 
		return false;
	else return true;
}
