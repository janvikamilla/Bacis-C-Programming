#include<stdio.h>
int main()
{
  float length, breadth, area;
printf("Enter length:");
scanf("%f", &length);
printf("Enter breadth:");
scanf("%f", &breadth);
area = length*breadth;
prinft("Area of rectangle=%.2f",area);
return 0;
}
