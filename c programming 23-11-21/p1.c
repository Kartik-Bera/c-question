#include<stdio.h>
int main()
{
    printf("Hello world\n");
    int i,age;
    for(i=1;i<10;i++)
    {
        printf("%d\n Enter age\n",i);
        scanf("%d",&age);
        
    if (age>10)
        break;
    }

    return 0;
}