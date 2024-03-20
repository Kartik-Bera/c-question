#include<stdio.h>
int main()
{
    int m[2][4]={{48,65,87,98},{76,39,73,50}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            // printf("The value of [%d][%d] element of the array is %d\n",i,j,m[i][j]);
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}