/* reverse a number using function and calculate difference between the two numbers */

#include <stdio.h>
int revnum(int);
void main()
{
    int n, m;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = revnum(n);
    printf("Reverse of %d is %d\n", n, m);
    if (n > m)
        printf("Difference between %d and %d is %d\n", n, m, n - m);
    else
        printf("Difference between %d and %d is %d\n", m, n, m - n);
}

int revnum(int n)
{
    int r, rev = 0;
    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return (rev);
}
