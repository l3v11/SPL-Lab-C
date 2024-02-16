// C program to swap two numbers using pointers.

#include <stdio.h>

void swap(int *num1, int *num2)
{
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    swap(&num1, &num2);

    printf("After swapping the numbers are: %d %d\n", num1, num2);

    return 0;
}
