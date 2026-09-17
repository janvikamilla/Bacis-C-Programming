#include <stdio.h>
int main()
{
    int minutes, hours, remaining;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    remaining = minutes % 60;
    printf("Hours = %d\n", hours);
    printf("Remaining minutes = %d", remaining);
    return 0;
}
