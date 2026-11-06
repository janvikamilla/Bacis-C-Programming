#include <stdio.h>

int main()
{
    int sensor[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int i, j;

    printf("Robot Sensor Grid:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", sensor[i][j]);
        }

        printf("\n");
    }

    return 0;
}
