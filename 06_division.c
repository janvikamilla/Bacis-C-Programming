#include <stdio.h>
int main()
{
    float a, b, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    result = a / b;
    printf("Division = %.2f", result);
    return 0;
}
