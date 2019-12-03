/*
             1 
          2  3 
       4  5  6 
    7  8  9 10 
11 12 13 14 15 
*/

#include <stdio.h>
void main()
{
    int n, i, j, k;
    printf("Enter the no. of lines\n");
    scanf("%d", &n);
    for (i = 1, k = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf("   ");
        for (j = 1; j <= i; j++)
            printf("%2d ", k++);
        printf("\n");
    }
}
