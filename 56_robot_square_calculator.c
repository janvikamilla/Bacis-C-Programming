#include <stdio.h>

int calculateSquare(int number)
{
    return number * number;
}

int main()
{
    int speed;

    printf("Enter Robot Speed: ");
    scanf("%d", &speed);

    if(speed < 0)
    {
        printf("Invalid Speed!\n");
    }
    else
    {
        printf("Square of Robot Speed = %d\n",
               calculateSquare(speed));
    }

    return 0;
}
