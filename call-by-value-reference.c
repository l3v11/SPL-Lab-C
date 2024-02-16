// C program to derive the concept of call by value and call by reference.

#include <stdio.h>

void call_by_value(int x)
{
    x = x * 2;
    printf("Inside call by value: %d\n", x);
}

void call_by_reference(int *x)
{
    *x = *x * 2;
    printf("Inside call by reference: %d\n", *x);
}

int main()
{
    int num = 5;
    printf("Before calling: %d\n\n", num);

    call_by_value(num);
    printf("After call by value: %d\n\n", num);

    call_by_reference(&num);
    printf("After call by reference: %d\n", num);

    return 0;
}
