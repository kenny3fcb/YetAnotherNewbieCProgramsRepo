/* 1+1⁄(2^2)+1⁄(3^2)+...1⁄(n^2) */

#include <stdio.h>
void main()
{
    int n, i;
    float sum;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + 1 / (float) (i * i);
    printf("Resultant summation = %0.3f\n", sum);
}
