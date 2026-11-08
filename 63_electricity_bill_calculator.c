#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if(units <= 100)
        bill = units * 2.50;
    else if(units <= 200)
        bill = 100 * 2.50 + (units - 100) * 3.50;
    else
        bill = 100 * 2.50 + 100 * 3.50 + (units - 200) * 5.00;

    printf("Total Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
