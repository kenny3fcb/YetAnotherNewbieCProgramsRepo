#include <stdio.h>
int power(int, int);
void main()
{
    int x, n;
    printf("Enter the value of x and n\n");
    scanf("%d%d", &x, &n);
    printf("%d^%d = %d\n", x, n, power(x, n));
}

int power(int x, int n)
{
    if (n == 0)
        return (1);
    else
        return (x * power(x, n - 1));
}
