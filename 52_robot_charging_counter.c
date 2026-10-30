#include <stdio.h>

int main()
{
int battery = 0;

printf("Robot Charging Started\n");

while(battery <= 100)
{
    printf("Battery Level: %d%%\n", battery);
    battery = battery + 20;
}

printf("Robot Fully Charged!\n");

return 0;

}
