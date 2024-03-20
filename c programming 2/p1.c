#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        max=n1;
            
    }
    else
    {
        max=n2;
    }
    printf("Maximun number=%d",max);
    return 0;
}
