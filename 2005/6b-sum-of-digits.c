/* sum of the digits of an integer */

#include <stdio.h>
void main()
{
    int n, r, sum = 0, m;
    printf("Enter any integer\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("Sum of the digits of %d is %d\n", m, sum);
}
