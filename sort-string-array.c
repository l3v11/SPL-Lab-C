// C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int size = strlen(s);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            /*
            '>' for ascending order
            '<' for descending order
            */
            if (s[i] > s[j])
            {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }

    printf("The string array in ascending order: %s", s);

    return 0;
}
