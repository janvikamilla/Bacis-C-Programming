#include <stdio.h>

int main()
{
    char word[50];
    int i, count = 0;

    printf("Enter a word: ");
    scanf("%49s", word);

    for(i = 0; word[i] != '\0'; i++)
    {
        if(word[i] == 'a' || word[i] == 'e' ||
           word[i] == 'i' || word[i] == 'o' ||
           word[i] == 'u' || word[i] == 'A' ||
           word[i] == 'E' || word[i] == 'I' ||
           word[i] == 'O' || word[i] == 'U')
        {
            count++;
        }
    }

    printf("Total Vowels = %d\n", count);

    return 0;
}
