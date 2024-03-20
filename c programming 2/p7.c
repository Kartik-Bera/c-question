#include<stdio.h>
int main()
{
    int n;
    printf("Enter year\n");
    scanf("%d", &n);
    if(n%4==0)
    {
        printf("Year is leap year \n");
    }    
    else
    {
        printf("Year is not leap year\n");

    }
    return 0;
}