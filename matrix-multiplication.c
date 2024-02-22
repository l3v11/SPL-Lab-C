// C program to multiply two matrices.

#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;

    while (1)
    {
        printf("Enter rows and columns for the first matrix: ");
        scanf("%d %d", &row1, &col1);

        printf("Enter rows and columns for the second matrix: ");
        scanf("%d %d", &row2, &col2);

        if (col1 == row2)
            break;

        printf("ERROR: The number of columns of the first matrix should "
               "be equal to the number of rows of the second matrix.\n");
    }

    int matrixA[row1][col1];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    int matrixB[row2][col2];
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int resultAB[col1][row2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            resultAB[i][j] = 0;
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                resultAB[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", resultAB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
