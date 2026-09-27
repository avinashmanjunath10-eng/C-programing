#include <stdio.h>

int main()
{
    int a[50][50], b[50][50], c[50][50];
    int i, j;
    int x1, y1, x2, y2;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < x1; i++)
    {
        for (j = 0; j < y1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < x2; i++)
    {
        for (j = 0; j < y2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if ((x1 == x2) && (y1 == y2))
    {
        for (i = 0; i < x1; i++)
        {
            for (j = 0; j < y1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("\nResultant Matrix (A + B):\n");
        for (i = 0; i < x1; i++)
        {
            for (j = 0; j < y1; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix addition not possible. Dimensions do not match.\n");
    }

    return 0;
}