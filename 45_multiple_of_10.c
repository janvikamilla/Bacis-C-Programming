#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 10 == 0)
    {
        printf("Number is a multiple of 10");
    }
    else
    {
        printf("Number is not a multiple of 10");
    }

    return 0;
}
