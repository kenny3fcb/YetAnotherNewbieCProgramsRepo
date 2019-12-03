/* Input an integer and print removing the even numbers */

#include <stdio.h>
void main()
{
    int n, m, num = 0, r, diff = 1;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        if (r % 2 != 0) {
            num = num + r * diff;
            diff = diff * 10;
        }
        n = n / 10;
    }
    printf("%d without even numbers is %d\n", m, num);
}
