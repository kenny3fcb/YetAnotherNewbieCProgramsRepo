/* 1^2+2^2+3^2+...+n^2 */

#include <stdio.h>
#include <math.h>
void main()
{
    int i, n, sum;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + pow (i, 2);
    printf("Resultant summation = %d\n", sum);
}
