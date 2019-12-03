/* Print integers from 1 to n omitting which are divisible by 10 */

#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Displaying integers from 1 to %d, omitting which are divisible by 10:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 10 != 0)
            printf("%d ", i);
    }
    printf("\n");
}
