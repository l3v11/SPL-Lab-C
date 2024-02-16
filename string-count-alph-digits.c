// C program to find total number of alphabets, digits or special characters in a string.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[10001];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int alphabets = 0, digits = 0, others = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalpha(s[i]))
            alphabets++;
        else if (isdigit(s[i]))
            digits++;
        else
            others++;
    }

    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", others);

    return 0;
}
