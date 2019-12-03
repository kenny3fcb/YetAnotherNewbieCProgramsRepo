#include <stdio.h>
void main()
{
    int decimal, ogdecimal, a[100], i, j;
    printf("Enter the decimal number\n");
    scanf("%d", &decimal);
    ogdecimal = decimal;
    for (i = 0; decimal > 0; i++) {
        a[i] = decimal % 2;
        decimal = decimal / 2;
    }
    printf("%d in binary is:\n", ogdecimal);
    for (j = i - 1; j >= 0; j--)
        printf("%d", a[j]);
    printf("\n");
}
