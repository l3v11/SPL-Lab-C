// C program to count total number of notes in given amount.

#include <stdio.h>

int main()
{
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    int size = sizeof(notes) / sizeof(notes[0]);
    int count = 0;

    printf("Total number of notes:\n");
    for (int i = 0; i < size; i++)
    {
        if (amount >= notes[i])
        {
            count = amount / notes[i];
            printf("%d = %d\n", notes[i], count);
            amount -= count * notes[i];
        }
    }
        return 0;
}
