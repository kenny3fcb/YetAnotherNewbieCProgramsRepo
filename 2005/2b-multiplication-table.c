#include <stdio.h>
void main()
{
    int n, m, i;
    printf("Enter any number\n");
    scanf("%d", &n);
    printf("Upto which number you want to generate your multiplication table?\n");
    scanf("%d", &m);
    printf("Multiplication table of %d upto %d is as follows:\n", n, m);
    for (i = 1; i <= m; i++)
        printf("%d * %d = %d\n", n, i, n * i);
}
