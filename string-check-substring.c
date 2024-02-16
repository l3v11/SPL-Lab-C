// C program to check whether a given substring is present in the given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10001], s2[10001];

    printf("Enter the string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the substring: ");
    fgets(s2, sizeof(s2), stdin);

    if (strstr(s1, s2) != NULL)
        printf("The substring is present in the given string.\n");
    else
        printf("The substring is not present in the given string.\n");

    return 0;
}