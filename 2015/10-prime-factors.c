#include <stdio.h>
int isprime(int);
void main()
{
    int i, n;
    printf("Enter any number\n");
    scanf("%d", &n);
    printf("Prime factors of %d are:\n", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && isprime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int isprime(int n)
{
    int i;
    for (i = 2; i < n / 2; i++) {
        if (n % i == 0)
            return (0);
    }
    return (1);
}
