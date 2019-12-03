#include <stdio.h>
void main()
{
    int i, n, m, sum = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Square of sum of digits of %d is %d\n", m, sum * sum);
}
