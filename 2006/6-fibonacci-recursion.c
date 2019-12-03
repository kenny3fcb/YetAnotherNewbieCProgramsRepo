/* print first n fibonacci numbers by recursion */

#include <stdio.h>
int fibonacci(int);
void main()
{
    int n, i;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Displaying first %d fibonacci numbers\n", n);
    for (i = 1; i <= n; i++)
        printf("%d ", fibonacci(i));
    printf("\n");
}

int fibonacci(int n)
{
    if (n == 1)
        return (0);
    else if (n == 2)
        return (1);
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
