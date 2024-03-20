#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    if(n>0)
    {
        printf("This is a positive number\n");
    }    
    else if(n<0)
    {
        printf("This is a negative number\n");
    }
    else
    {
        printf("Number is zero\n");

    }
    return 0;
}



