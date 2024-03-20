#include<stdio.h>
#define MAX_SIZE 20
int main()
{
    int a[MAX_SIZE],t,s;
    printf("Enter the size\n");    
    scanf("%d",&s);
    for(int i=0;i<s;i++)
    {
        printf("Enter value  %d :  ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(a[i]>a[j])
            {   t=a[i];
                a[i]=a[j];
                a[j]=t;    }    
        }   }
    printf("\nAscending order : ");
    for(int i=0;i<s;i++)
    printf("%d\t",a[i]);
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(a[i]<a[j])
            {   t=a[i];
                a[i]=a[j];
                a[j]=t;    }  
        }   }
    printf("\nDecending order : ");
    for(int j=0;j<s;j++)
    printf("%d\t",a[j]);
    return 0;
}