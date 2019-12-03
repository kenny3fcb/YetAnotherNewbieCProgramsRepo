/* 1+(x^3)⁄3!+(x^5)⁄5!+...up to n terms */

#include <stdio.h>
#include <math.h>
float fact(int);
void main()
{
    int a, count, n, x;
    float sum;
    printf("Enter the no. of terms\n");
    scanf("%d", &n);
    printf("Enter the value of x\n");
    scanf("%d", &x);
    for (a = 3, count = 1; count <= n - 1; count++, a = a + 2)
        sum = sum + pow(x, a) / fact(a);
    if (n >= 1)
        printf("Required summation = %.3f\n", 1 + sum);
    else
        printf("Required summation = 0.000\n");
}

float fact(int n)
{
    if (n <= 1)
        return (1);
    else
        return (n * fact(n - 1));
}
