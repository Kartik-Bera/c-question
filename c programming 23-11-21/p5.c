#include<stdio.h>
int main()
{
    int n;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",i);
        for(int j=0;j<5;j++)
        {
            printf("Enter number, enter zero to exit\n");
            scanf("%d",&n);
            if(n==0)
            {
                // break;
                goto end; 
            }

        }
    }
    end:
    return 0;
}