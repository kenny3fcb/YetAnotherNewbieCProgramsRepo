/* 1+2⁄2!+3⁄3!+...+n⁄n! */

#include <stdio.h>
float fact(int);
void main()
{
    int n, i;
    float sum;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + i / fact(i);
    printf("The resultant summation is %.3f\n", sum);
}

float fact(int n)
{
    int i, f;
    for (i = 1, f = 1; i <= n; i++)
        f = f * i;
    return (f);
}
