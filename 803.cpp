
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s	
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}
int myStrlen(char s[], int k)
{
	k = 0;
	while (s[k] != '\0')
		k++;
	return k;
}
void Chuanhoa(char s[])
{
	int k=0;
    int n=myStrlen(s,k);
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            for(int j=i;j<n-1;j++){
                s[j] = s[j+1];
            }
            s[n-1]=NULL;
            i--;
            n--;
        }
        else break;
    }


//Xóa khoảng trắng cuối xâu
    for(int i=n-1;i>=0;i--){
        if(s[i]==' '){
            s[i]=NULL;
            n--;
        }
        else break;
    }

    //Xóa khoảng trắng không hợp lệ(khoảng trắng bị thừa)
    for(int i=1;i<n-1;i++)
    {
        if(s[i]==' '&&s[i+1]==' '){
            for(int j=i;j<n-1;j++){
                s[j] = s[j+1];
            }
            s[n-1]=NULL;
            i--;
            n--;
        }
    }
    for (int i=0; i<n; i++){
        if (s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    s[0]=toupper(s[0]);
    for (int i=0; i<n; i++)
        if (s[i]==' '&& s[i+1]!=' ')
            s[i+1]=toupper(s[i+1]);
}
