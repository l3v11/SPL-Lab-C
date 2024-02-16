// C program to input and print array elements using pointers.

#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;

    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", ptr + i);

    printf("Array elements: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));

    return 0;
}
