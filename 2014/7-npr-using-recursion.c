#include <stdio.h>
int npr(int, int);
int fact(int);
void main()
{
    int n, r;
    printf("Enter the value of n and r\n");
    scanf("%d%d", &n, &r);
    if (n >= r)
        printf("%dP%d = %d\n", n, r, npr(n, r));
    else
        printf("Please enter the values of n and r such that n > r\n");
}

int npr(int n, int r)
{
    if (n == r)
        return (fact(n));
    else if (r == 1)
        return (n);
    else if (r == 0)
        return (1);
    else
        return (n * npr(n - 1, r - 1));
}

int fact(int n)
{
    if (n <= 1)
        return (1);
    else
        return (n * fact(n - 1));
}
