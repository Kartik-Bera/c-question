#include<stdio.h>
int main()
{
    int m[2][2]={{48,65},{76,50}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            // printf("The value of [%d][%d] element of the array is %d\n",i,j,m[i][j]);
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
