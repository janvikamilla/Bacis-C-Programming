#include <stdio.h>

int main()
{
    int speed;

    printf("Enter Robot Speed: ");
    scanf("%d", &speed);

    if(speed < 0)
    {
        printf("Invalid Speed\n");
    }
    else if(speed == 0)
    {
        printf("Robot is Stopped\n");
    }
    else if(speed <= 5)
    {
        printf("Robot is Moving Slowly\n");
    }
    else if(speed <= 10)
    {
        printf("Robot is Moving at Normal Speed\n");
    }
    else
    {
        printf("Robot is Moving Fast\n");
    }
    return 0;
}
