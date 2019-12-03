#include <stdio.h>
void main()
{
    int a[100], n, m, i, temp;
    printf("How many elements you want to enter?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element [%d]\n", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0, m = n - 1; i < m; i++, m--) {
        temp = a[i];
        a[i] = a[m];
        a[m] = temp;
    }
    printf("The reversed array is as follows:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
