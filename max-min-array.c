// C program to find maximum and minimum element in an array.

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

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
