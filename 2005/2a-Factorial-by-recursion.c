#include <stdio.h>
long int factorial(int);
void main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    printf("Factorial of %d is %ld\n", n, factorial(n));
}

long int factorial(int n)
{
    if (n <= 1)
        return (1);
    else
        return (n * factorial(n - 1));
}
