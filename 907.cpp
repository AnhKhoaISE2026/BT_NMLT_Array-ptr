#include <iostream>

#define MAX 100

void Matrix_Typing(float a[][MAX], int &m, int &n)
{
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            std::cin>>a[i][j];
        }
    }
}
void Show_Matrix(float a[][MAX], int m, int n)
{
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            std::cout<<a[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    float a[MAX][MAX]; int m,n;
    std::cin>>m>>n;
    Matrix_Typing(a,m,n);
    Show_Matrix(a,m,n);

}
