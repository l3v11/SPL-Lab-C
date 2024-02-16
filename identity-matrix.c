// C program to check Identity matrix.

#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of the square matrix: ");
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

    int flag = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == j && matrixA[i][j] != 1) || (i != j && matrixA[i][j] != 0))
                flag = 0;
        }
    }

    if (flag)
        printf("The given matrix is an identity matrix.\n");
    else
        printf("The given matrix is not an identity matrix.\n");

    return 0;
}
