/* 1+x⁄1!+(x^2)⁄2!+(x^3)⁄3!...+(x^n)⁄n! */

#include <stdio.h>
#include <math.h>
float fact(int);
void main()
{
    int x, n, i, j;
    float sum;
    printf("Enter the value of x and n\n");
    scanf("%d%d", &x, &n);
    for (i = 0, sum = 0; i <= n; i++)
            sum = sum + pow(x, i) / fact(i);
    printf("Resultant summation = %.3f\n", sum);
}

float fact(int n)
{
    if (n <= 1)
        return (1);
    else
        return (n * fact(n - 1));
}
