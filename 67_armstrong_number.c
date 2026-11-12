#include <stdio.h>

int main()
{
    int number, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(number > 0)
    {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
