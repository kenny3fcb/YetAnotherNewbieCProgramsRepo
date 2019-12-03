#include <stdio.h>
void main()
{
    int n, fact, i;
    printf("Enter any number\n");
    scanf("%d", &n);
    i = fact = 1;
    while (i <= n) {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, fact);
}
