#include <stdio.h>
void main()
{
    int a[100], n, min, max, i, temp;
    printf("How many numbers you want to enter?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element [%d]\n", i + 1);
        scanf("%d", &a[i]);
    }
    min = max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    for (i = 0; i < n; i++) {
        if (a[i] == max)
            a[i] = min;
        else if (a[i] == min)
            a[i] = max;
    }
    printf("Required array after swapping largest and smallest elements:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
