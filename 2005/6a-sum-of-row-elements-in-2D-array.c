/* sum of elements of each row in a 2D array */

#include <stdio.h>
void main()
{
    int a[10][10], row, col, i, j, sum;
    printf("How many rows and columns you want to use?\n");
    scanf("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element [%d][%d]\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The entered 2D array is as follows\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%2d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < row; i++) {
        printf("Sum of the elements of row [%d]:\n", i + 1);
        for (j = 0, sum = 0; j < col; j++)
            sum = sum + a[i][j];
        printf("%d\n", sum);
    }
}
