#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no. \n");
    scanf("%d",&n);
    for(i=1;i>=n;i++)
    {
        for(j=n;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(n-i)+1;j++)
        {
            printf("%d",j);
        }
        
    printf("\n");
     
    }

    return 0;
}