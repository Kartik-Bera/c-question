#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character\n");
    scanf("%c", &c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        printf("Character is an alphabet\n");
    }    
    
    else
    {
        printf("Character is not an alphabet\n");
    }
    return 0;
}
