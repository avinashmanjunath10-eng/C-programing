#include <stdio.h>

#define MAX 50

void readMatrix(int m[MAX][MAX], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
}

void printMatrix(int m[MAX][MAX], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int m[MAX][MAX], int t[MAX][MAX], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            t[j][i] = m[i][j];
        }
    }
}

int main()
{
    int a[MAX][MAX], transpose[MAX][MAX];
    int rows, cols;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    readMatrix(a, rows, cols);

    printf("\nOriginal Matrix:\n");
    printMatrix(a, rows, cols);

    transposeMatrix(a, transpose, rows, cols);

    printf("\nTransposed Matrix:\n");
    printMatrix(transpose, cols, rows);   // note: rows and cols swap

    return 0;
}