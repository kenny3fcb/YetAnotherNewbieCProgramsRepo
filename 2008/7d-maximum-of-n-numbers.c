#include <stdio.h>
void main()
{
    int n, m, i, max;
    printf("How many numbers you want to enter?\n");
    scanf("%d", &n);
    printf("Enter number [1]\n");
    scanf("%d", &m);
    max = m;
    for (i = 2; i <= n; i++) {
        printf("Enter number [%d]\n", i);
        scanf("%d", &m);
        if (m > max)
            max = m;
    }
    printf("Maximum among these %d numbers is %d\n", n, max);
}
