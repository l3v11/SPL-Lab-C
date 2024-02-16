// C program to search element in an array using linear search algorithm.

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

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int flag = 0, index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            index = i;
            break;
        }
    }

    if (flag)
        printf("%d is found at index %d\n", key, index);
    else
        printf("%d is not found in the array.\n", key);

    return 0;
}
