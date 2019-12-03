#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Displaying natural numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
}
