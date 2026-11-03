#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("=== MINI CALCULATOR ===\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Choose an operation: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %d\n", a + b);
            break;

        case 2:
            printf("Result = %d\n", a - b);
            break;

        case 3:
            printf("Result = %d\n", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Division by zero is not possible!\n");
            break;

        default:
            printf("Invalid Operation!\n");
    }

    return 0;
}
