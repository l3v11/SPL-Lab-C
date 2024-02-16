// C program to count frequency of each element in an array.

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

    for (int i = 0; i < 100000; i++)
    {
        if (freq[i] > 0)
            printf("%d occurs %d times\n", i, freq[i]);
    }

    return 0;
}
