#include <stdio.h>
void main()
{
    int a, b, c, max;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        if (a > c)
            max = a;
        else
            max = c;
    } else {
        if (b > c)
            max = b;
        else
            max = c;
    }
    printf("Biggest among %d, %d and %d is %d\n", a, b, c, max);
}
