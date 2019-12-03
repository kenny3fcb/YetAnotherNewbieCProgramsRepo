#include <stdio.h>
#include <math.h>
void main()
{
    int binary, ogbinary, r, decimal, i;
    printf("Enter a binary number\n");
    scanf("%d", &binary);
    ogbinary = binary;
    for (i = 0, decimal = 0; binary > 0; i++, binary = binary / 10) {
        r = binary % 10;
        decimal = decimal + r * pow(2, i);
    }
    printf("%d in decimal is %d\n", ogbinary, decimal);
}
