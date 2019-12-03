/* print all numbers between 100 and 200 which are divisible by 5 but not by 15 */

#include <stdio.h>
void main()
{
    int i;
    printf("Displaying all numbers between 100 and 200 which are divisible by 5 but not divisible by 15\n");
    for (i = 100; i <= 200; i++) {
        if (i % 5 == 0 && i % 15 != 0)
            printf("%d ", i);
    }
    printf("\n");
}
