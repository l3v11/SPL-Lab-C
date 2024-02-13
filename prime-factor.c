// C program to find prime factors of a number.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The prime factors of %d are: ", n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int is_prime = 1;

            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime == 1)
                printf("%d ", i);
        }
    }

    return 0;
}
