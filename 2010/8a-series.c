/* 1-2+3-4+5-...n */

#include <stdio.h>
void main()
{
    int n, sum, i;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++) {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("Resultant summation = %d\n", sum);
}
