#include <stdio.h>

int main()
{
int choice;

printf("ROBOT MOVEMENT CONTROL\n");
printf("1. Move Forward\n");
printf("2. Move Backward\n");
printf("3. Turn Left\n");
printf("4. Turn Right\n");
printf("5. Stop Robot\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
    case 1:
        printf("Robot Moving Forward\n");
        break;

    case 2:
        printf("Robot Moving Backward\n");
        break;

    case 3:
        printf("Robot Turning Left\n");
        break;

    case 4:
        printf("Robot Turning Right\n");
        break;

    case 5:
        printf("Robot Stopped\n");
        break;

    default:
        printf("Invalid Choice\n");
}

return 0;

}
