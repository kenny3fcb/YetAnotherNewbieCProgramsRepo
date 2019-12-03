/* arrange a group of numbers into positive and negative numbers */

#include <stdio.h>
void main()
{
    int a[100], b[100], c[100], n, i, j, k;
    printf("How many numbers you want to enter?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element [%d]\n", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0, j = 0, k = 0; i < n; i++) {
        if (a[i] >= 0)
            b[j++] = a[i];
        else
            c[k++] = a[i];
    }
    printf("Positive array:\n");
    for (i = 0; i < j; i++)
        printf("%d ", b[i]);
    printf("\n");
    printf("Negative array:\n");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    printf("\n");
}
