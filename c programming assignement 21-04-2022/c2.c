#include<stdio.h>
int main()
{
    int a[3][3],i,j,s=0;
    int *p[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value of [%d] [%d] = ",i,j);
            scanf("%d",&a[i][j]);
           *p[i] = &a[i][j];

        }
    }
    printf("Matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",*p[i][j]);
            s=s+*p[i][j];
        }
        printf("\n");
    }
    printf("Sum of all matrix element is %d",s);
    return 0;
}