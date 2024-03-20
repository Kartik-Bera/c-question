#include<stdio.h>
const int CITY=2;
const int WEEK=7;
int main()
{
    int t[CITY][WEEK];
    printf("Enter 14 TEMPERATURE values  :\n");
    for(int i=0;i<CITY;i++)
    {
        for(int j=0;j<WEEK;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
    for(int i=0;i<CITY;i++)
    {
        for(int j=0;j<WEEK;j++)
        {
            printf("[%d][%d]=%d\n",i,j,t[i][j]);
            // printf("The value of [%d][%d] element of the array is %d\n",i,j,m[i][j]);
            // printf("%d\t",t[i][j]);
        }
        printf("\n");
    }

    return 0;
}