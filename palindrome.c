// C program to check whether a number is palindrome or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int num = n;
    int rev = 0;

    while (n != 0)
    {
        rev = n % 10 + rev * 10;
        n /= 10;
    }

    if (rev == num)
        printf("%d is a palindrome number\n", num);
    else
        printf("%d is not a palindrome number\n", num);

    return 0;
}
