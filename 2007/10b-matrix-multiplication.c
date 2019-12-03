#include <stdio.h>
#include <stdlib.h>
void inputarray(int [][10], int, int);
void printarray(int [][10], int, int);
void main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, row1, col1, row2, col2;
    printf("Enter the no. of rows and columns for 1st matrix\n");
    scanf("%d%d", &row1, &col1);
    printf("Enter the no. of rows and columns for 2nd matrix\n");
    scanf("%d%d", &row2, &col2);
    if (col1 != row2) {
        printf ("Matrix multiplication is not possible\n");
        exit (0);
    }
    printf("Enter data for 1st matrix\n");
    inputarray(a, row1, col1);
    printf("Enter data for 2nd matrix\n");
    inputarray(b, row2, col2);
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            c[i][j] = 0;
            for (k = 0; k < col1; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }
    printf("The 1st matrix:\n");
    printarray(a, row1, col1);
    printf("The 2nd matrix:\n");
    printarray(b, row2, col2);
    printf("The resultant matrix is as follows:\n");
    printarray(c, row1, col2);
}

void inputarray(int a[][10], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element [%d][%d]\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

void printarray(int a[][10], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%2d ", a[i][j]);
        printf("\n");
    }
}
    
