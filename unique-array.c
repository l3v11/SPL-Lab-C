// C program to print all unique elements in array.

#include <stdio.h>

int freq[100000];

int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of the array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    printf("Unique elements in the array are: ");

    for (int i = 0; i < 100000; i++)
    {
        if (freq[i] == 1)
            printf("%d ", i);
    }

    return 0;
}
