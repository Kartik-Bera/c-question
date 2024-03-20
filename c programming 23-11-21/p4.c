#include<stdio.h>
int main()
{
    label:
    printf("\nWe are in the label\n");
    goto end;
    printf("Hello\n");

    goto label;
    end:
    printf("we are at the end\n");
    return 0;
}