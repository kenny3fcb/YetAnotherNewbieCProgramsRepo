#include <stdio.h>
void main()
{
    int a[100], n, i, j, temp;
    printf("How many numbers you want to enter?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element [%d]\n", i + 1);
        scanf("%d", &a[i]);
    }
    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("The bubble sorted array is as follows\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
