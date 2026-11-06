#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of Digits = %d\n", sum);

    return 0;
}
