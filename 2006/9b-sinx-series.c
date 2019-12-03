/* sin(x) = x-(x^3)⁄3!+(x^5)⁄5!-(x^7)⁄7!...+(x^n)⁄n! */

#include <stdio.h>
#include <math.h>
float fact(int);
void main()
{
    int n, x, i, count;
    float sum = 0;
    printf("Enter the no. of terms\n");
    scanf("%d", &n);
    printf("Enter the value of x\n");
    scanf("%d", &x);
    for (i = 1, count = 1; count <= n; count++, i = i + 2) {
        if (count % 2 != 0)
            sum = sum + pow(x, i) / fact(i);
        else
            sum = sum - pow(x, i) / fact(i);
    }
    printf("Resultant summation = %.5f\n", sum);
}

float fact(int n)
{
    if (n <= 1)
        return (1);
    else
        return (n * fact(n - 1));
}
