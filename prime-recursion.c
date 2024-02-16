// C program to check a number prime or not using recursion.

#include <stdio.h>

int is_prime(int num, int i)
{
    if (i == 1)
        return 1;
    else
    {
        if (num % i == 0)
            return 0;
        else
            return is_prime(num, i - 1);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int res = is_prime(n, n / 2);

    if (res == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
