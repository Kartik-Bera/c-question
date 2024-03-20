#include<stdio.h>
int main()
{   int a;
    printf("Enter week number\n");
    scanf("%d",&a);
    switch (a)
    {   case 1:
        printf("MONDAY ",1);    break;
        case 2:
        printf("TUESDAY ",2);   break;
        case 3:
        printf("WEDNESDAY ",3); break;
        case 4:
        printf("THURSDAY ",4);  break;
        case 5:
        printf("FRIDAY ",5);    break;
        case 6:
        printf("SATURDAY ",6);  break;
        case 7:
        printf("SUNDAY ",7);    break;
    default: printf("Invalid number"); break;
    }
    return 0;
}
