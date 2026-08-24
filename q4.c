#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int rowNo, colNo;
    int rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("\nEnter array's elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter row number: ");
    scanf("%d", &rowNo);

    printf("Elements of row %d: ", rowNo);

    for (j = 0; j < cols; j++)
    {
        printf("%d, ", a[rowNo][j]);
        rowSum += a[rowNo][j];
    }

    printf("\nThe sum of row %d: %d\n", rowNo, rowSum);

    printf("\nEnter column number: ");
    scanf("%d", &colNo);

    printf("Elements of column %d: ", colNo);

    for (i = 0; i < rows; i++)
    {
        printf("%d, ", a[i][colNo]);
        colSum += a[i][colNo];
    }

    printf("\nThe sum of column %d: %d\n", colNo, colSum);

    return 0;
}