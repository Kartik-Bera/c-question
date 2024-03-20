#include<stdio.h>
int main()
{
    char c;
    printf("Enter any alphabet\n");
    scanf("%c", &c);
    if((c=='a')||(c=='e')||(c=='i')||
       (c=='o')||(c=='u')||(c=='A')||
       (c=='E')||(c=='I')||(c=='O')||
       (c=='U'))
    {
        printf("Alphabet is vowel \n");
    }    
    else
    {
        printf("Alphabet is consonant\n");

    }
    return 0;
}