// Compare two strings without using string library functions.

#include <stdio.h>

int main()
{
    char s1[10001], s2[10001];

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);

    int flag = 1;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            flag = 0;
    }

    if (flag)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
