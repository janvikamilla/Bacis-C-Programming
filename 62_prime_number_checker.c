#include <stdio.h>

int main()
{
    int number, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number <= 1)
    {
        printf("Not a Prime Number\n");
    }
    else
    {
        for(i = 1; i <= number; i++)
        {
            if(number % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
            printf("Prime Number\n");
        else
            printf("Not a Prime Number\n");
    }

    return 0;
}
