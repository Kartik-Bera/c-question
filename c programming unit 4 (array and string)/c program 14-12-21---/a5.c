#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],s[2][2],S[2][2],m[2][2],d[2][2];
    printf("Enter values  :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("a%d%d :",i,j);
            scanf("%d",&a[i][j]);
            printf("\t");
            printf("b%d%d :",i,j);
            scanf("%d",&b[i][j]);

        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           s[i][j]=a[i][j]+b[i][j];
           m[i][j]=a[i][j]*b[i][j];
           S[i][j]=a[i][j]-b[i][j];
           d[i][j]=a[i][j]/b[i][j];
           printf("\nSum [%d][%d] : %d\n",i,j,s[i][j]);
           printf("Difference [%d][%d] : %d\n",i,j,S[i][j]);
           printf("Multiplication [%d][%d] : %d\n",i,j,m[i][j]);
           printf("Division [%d][%d] : %d\n",i,j,d[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}