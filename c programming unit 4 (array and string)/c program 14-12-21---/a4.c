#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],m[2][2];
    printf("Enter values  :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("a%d%d :",i,j);
            scanf("%d",&a[i][j]);
            printf("b%d%d :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Multiplication of two matrix \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           m[i][j]=a[i][j]*b[i][j];
           printf("[%d][%d] : %d\t",i,j,m[i][j]);
        }
        printf("\n");
    }
    return 0;
}