// C program to concatenate two strings manually.

#include <stdio.h>

int main()
{
    char s1[10001], s2[10001];

    printf("Enter the first string: ");
    gets(s1);

    printf("Enter the second string: ");
    gets(s2);

    int cnt = 0;
    while (s1[cnt] != 0)
        cnt++;

    for (int i = 0; s2[i] != '\0'; i++)
        s1[cnt++] = s2[i];

    s1[cnt] = '\0';

    printf("The concatenated string is: %s", s1);

    return 0;
}