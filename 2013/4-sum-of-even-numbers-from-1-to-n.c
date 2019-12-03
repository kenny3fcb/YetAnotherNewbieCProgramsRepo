#include <stdio.h>
void main()
{
    int i, sum, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++) {
        if (i % 2 == 0)
            sum = sum + i;
    }
    printf("Summation of even numbers from 1 to %d is %d\n", n, sum);
}
