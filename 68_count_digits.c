#include <stdio.h>

int main()
{
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number < 0)
        number = -number;

    do
    {
        count++;
        number = number / 10;
    }
    while(number != 0);

    printf("Total Digits = %d", count);

    return 0;
}
