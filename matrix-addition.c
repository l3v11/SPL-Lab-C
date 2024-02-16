// C program to add two matrices.

#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of the matrix: ");
    scanf("%d", &size);

    int matrixA[size][size];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    int matrixB[size][size];
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int resultAB[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            resultAB[i][j] = 0;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            resultAB[i][j] += matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", resultAB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
