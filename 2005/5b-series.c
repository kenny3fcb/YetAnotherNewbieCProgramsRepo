/* s = 1 + (1 + 2) + (1 + 2 + 3) + ... upto n terms */

#include <stdio.h>
int natural(int);
void main()
{
    int n, i, sum;
    printf("Enter the no. of terms\n");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + natural(i);
    printf("Resultant summation = %d\n", sum);
}

int natural(int n)
{
    int i, sum;
    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + i;
    return (sum);
}
