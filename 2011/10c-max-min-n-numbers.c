/* Find out the max. and min. among n numbers where you can examine the set of numbers only once */

#include <stdio.h>
void main()
{
    int a[100], n, min, max, i;
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
    printf("Maximum and minimum among those %d numbers is %d and %d respectively\n", n, max, min);
}
