#include<stdio.h>
int main()
{
    int m[2][3][4];   
    printf("Enter 24 values  :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
            {
                scanf("%d",&m[i][j][k]);
            }
        }
    }
    // print values with proper indexing
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
             for(int k=0;k<4;k++)
            {
                printf("Marks[%d][%d][%d]=%d\n",i,j,k,m[i][j][k]);
               // printf("The value of [%d][%d] element of the array is %d\n",i,j,m[i][j]);
            // printf("%d\t",m[i][j][k]); 
            }
             printf("\n");
        }
       
    }
    return 0;
}