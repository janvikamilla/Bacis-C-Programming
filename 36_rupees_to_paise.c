#include<stdio.h>
int main()
{
  int rupees, paise;
printf("Enter amount in rupees:");
scanf("%d", &rupees);
paise = rupees*100;
printf("Amount in paise = %d",paise);
return 0;
  }
