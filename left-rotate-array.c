// C program to left rotate an array.

#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of the array: ");

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int n;
    printf("Enter number of times to left rotate: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int tmp = arr[0];
        for (int j = 0; j < size - 1; j++)
            arr[j] = arr[j + 1];
        arr[size - 1] = arr[0];
    }

    printf("Array after rotation: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}