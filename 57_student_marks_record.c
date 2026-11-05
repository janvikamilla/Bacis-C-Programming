#include <stdio.h>

struct Student
{
    int rollNo;
    int marks;
};

int main()
{
    struct Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);

    printf("Enter Marks: ");
    scanf("%d", &s1.marks);

    printf("\n--- Student Record ---\n");
    printf("Roll Number: %d\n", s1.rollNo);
    printf("Marks: %d\n", s1.marks);

    if(s1.marks >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    return 0;
}
