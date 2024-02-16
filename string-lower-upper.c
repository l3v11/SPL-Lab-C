// C program to convert lowercase to uppercase and vice versa in a string.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[10001];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (islower(s[i]))
            printf("%c", toupper(s[i]));
        else
            printf("%c", s[i]);
    }
}
