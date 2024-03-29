// C program to find nth fibonacci term using recursion.

#include <stdio.h>

#define ull unsigned long long

ull fibn(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibn(num - 1) + fibn(num - 2);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    ull res = fibn(n);

    printf("%dth fibonacci term is: %llu\n", n, res);

    return 0;
}
