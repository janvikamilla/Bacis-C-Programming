#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Result = %d", a + b);
            break;
        case 2:
            printf("Result = %d", a - b);
            break;
        case 3:
            printf("Result = %d", a * b);
            break;
        case 4:
            printf("Result = %d", a / b);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
