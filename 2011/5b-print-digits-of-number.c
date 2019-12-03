#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Digits of %d are (least significant bit first):\n", n);
    while (n > 0) {
        printf("%d ", n % 10);
        n = n / 10;
    }
    printf("\n");
}
