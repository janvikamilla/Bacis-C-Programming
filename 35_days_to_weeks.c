#include<stdio.h>
int main()
{
  int days, weeks, remaining;
printf("Enter number of days:");
scanf("%d", &days);
weeks = days/7;
remaining = days%7;
printf("weeks = %d\n",weeks);
printf("remaining days = %d", remaining);
return 0;
}
