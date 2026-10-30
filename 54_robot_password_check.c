#include <stdio.h>

int main()
{
int password;

do
{
    printf("Enter Robot Security Password: ");
    scanf("%d", &password);

    if(password != 1234)
    {
        printf("Wrong Password! Try Again.\n");
    }

} while(password != 1234);

printf("Access Granted! Robot Unlocked.\n");

return 0;

}
