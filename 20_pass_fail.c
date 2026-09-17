#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks >= 40)
    {
        printf("You are Pass");
    }
    else
    {
        printf("You are Fail");
    }
    return 0;
}
