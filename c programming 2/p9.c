#include<stdio.h>
int main()
{
    int a,b,c,d,e,n,m;
    printf("Enter marks of PHYSICS \n");      scanf("%d",&a);
    printf("Enter marks of CHEMISTRY \n");    scanf("%d",&b);
    printf("Enter marks of BIOLOGY \n");      scanf("%d",&c);
    printf("Enter marks of MATHEMATICS \n");  scanf("%d",&d);
    printf("Enter marks of COMPUTER \n");     scanf("%d",&e);
    n=(a+b+c+d+e);
    printf("Total marks = %3d\n",n);
    m=(n)/.5;
    printf("Percentage = %0.2f\n",0.1*m);
    if(.1*m>=90)
    {printf("Grade A\n");}
    else if (.1*m>=80){printf("Grade B");}
    else if (.1*m>=70){printf("Grade C");}
    else if (.1*m>=60){printf("Grade D");}
    else if (.1*m>=40){printf("Grade E");}
    else{printf("Grade F");}
    return 0;
}
