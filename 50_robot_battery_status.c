#include <stdio.h>

int main()
{
int battery;

printf("Enter Robot Battery Percentage: ");
scanf("%d", &battery);

if(battery < 0 || battery > 100)
{
    printf("Invalid Battery Percentage\n");
}
else if(battery >= 70)
{
    printf("Battery Status: HIGH\n");
    printf("Robot is Ready to Work\n");
}
else if(battery >= 30)
{
    printf("Battery Status: MEDIUM\n");
    printf("Robot Can Continue Working\n");
}
else
{
    printf("Battery Status: LOW\n");
    printf("Please Charge the Robot\n");
}
return 0;
}
