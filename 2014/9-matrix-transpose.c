#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], i, j, k, row, col;
    printf("Enter the no. of rows and columns of the matrix\n");
    scanf("%d%d", &row, &col);
    printf("Enter data for the matrix\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element [%d][%d]\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            b[i][j] = a[j][i];
    }
    printf("Original matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%2d ", a[i][j]);
        printf("\n");
    }
    printf("Transposed matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%2d ", b[i][j]);
        printf("\n");
    }
}
