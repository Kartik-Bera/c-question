#include<stdio.h>
struct s_tag
{
  int a;
  long int b;
} x;
union u_tag
{
     int a;
     long int b;
} y;
int main()
{
    printf("Memory allocation for structure = %d", sizeof(x));
    printf("\nMemory allocation for union = %d", sizeof(y));
    return 0;
}