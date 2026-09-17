#include<stdio.h>
int main()
{
  float principal, rate, time, interest;
printf("Enter principal amount:");
scanf("%f",&principal);
printf("Enter rate:");
scanf("%f", &rate);
printf("Enter time:");
scanf("%f", &time);
interest = ( principal*rate*time)/100;
printf("Simple interest=%.2f",interest);
return 0;
}
