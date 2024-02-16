// C program to derive the concept of continue and break.

#include <stdio.h>

int main()
{
    printf("The first five odd numbers are: ");
    int cnt = 0;

    for (int i = 1; ; i += 2)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        if (i > 1)
        {
            printf("%d ", i);
            cnt++;
        }

        if (cnt == 5)
        {
            break;
        }
    }

    return 0;
}
