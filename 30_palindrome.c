#include <stdio.h>
int main()
    int n, original, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(original == reverse)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    return 0;
}
