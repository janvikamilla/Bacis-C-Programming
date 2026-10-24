#include <stdio.h>

int main()
{
int number;

printf("Enter a number: ");
scanf("%d", &number);

if(number % 3 == 0 && number % 5 == 0)
{
    printf("Number is divisible by both 3 and 5");
}
else
{
    printf("Number is not divisible by both 3 and 5");
}

return 0;
}
