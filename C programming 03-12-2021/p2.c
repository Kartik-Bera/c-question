#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no. of rows for triangle pattern\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            
            printf("* ");
        }
    
    printf("\n");
     
    }

    return 0;
}