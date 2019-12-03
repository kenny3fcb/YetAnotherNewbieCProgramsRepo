#include <stdio.h>
int power(int, int);
void main()
{
    int x, n;
    printf("Enter x and n\n");
    scanf("%d%d", &x, &n);
    printf("%d^%d = %d\n", x, n, power(x, n));
}

int power(int x, int n)
{
    int i, z;
    for (i = 1, z = 1; i <= n; i++)
        z = z * x;
    return (z);
}
