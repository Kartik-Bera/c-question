#include<stdio.h>
int main()
{
    int number=1;
    char character;
    printf("Enter char\n");
    scanf("%c",&character);
    int sum;
    sum=number+character;
    printf("Value of sum : %d\n",sum);
    printf("Ascii value of %c is %d",character,character);
    return 0;
}