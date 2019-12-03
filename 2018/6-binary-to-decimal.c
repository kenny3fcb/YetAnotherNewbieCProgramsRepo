#include <stdio.h>
#include <math.h>
void main()
{
    int binary, ogbinary, i = 0, decimal = 0, r;
    printf("Enter any binary number\n");
    scanf("%d", &binary);
    ogbinary = binary;
    while (binary > 0) {
        r = binary % 10;
        decimal = decimal + r * pow(2, i);
        i++;
        binary = binary / 10;
    }
    printf("%d in decimal is %d\n", ogbinary, decimal);
}
