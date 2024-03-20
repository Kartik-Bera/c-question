#include<stdio.h>

#define pi 3.1416//macro
int main()
{
  float area, radius;
  
  printf("Enter the radius of circle whose area to be calculated\n");
  scanf("%f",&radius);
  area=pi*radius*radius;
  printf("\nThe Area of the Circle is = %f",area);
 
  
  return 0;
}