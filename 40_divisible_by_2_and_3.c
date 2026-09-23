#include<stdio.h>
int main()
{
  int number;
printf("Enter a number:");
scanf("%d", &number);
if(number%2==0&&number%3==0)
{
printf("Number is divisible by both 2 and 3");
}
else
{
printf("Number is not divisible by both 2 and 3");
}
return 0;
}
