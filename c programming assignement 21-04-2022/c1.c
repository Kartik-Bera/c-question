#include<stdio.h>
int main()
{
    char str[100];
    char *p;
    printf("Enter any string\n");
    scanf("%s",str);
    p=str;
    printf("The input string is ");
    while(*p!='\0')
    printf("%c",*p++);
    return 0;
}
