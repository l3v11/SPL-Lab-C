// C program to sort an array in ascending or descending order.

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

    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - 1; j++)
        {
            /*
            '>' for ascending order
            '<' for descending order
            */
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 1;
            }
        }
        if (!flag)
            break;
    }

    printf("Elements of array in ascending order: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
