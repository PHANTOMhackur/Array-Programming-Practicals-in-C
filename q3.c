#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter the array's row & column size: ");
    scanf("%d", &rows);

    cols = rows;

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

    printf("\nThe transpose matrix of an array:\n");

    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", a[j][i]);
        }

        printf("\n");
    }

    return 0;
}