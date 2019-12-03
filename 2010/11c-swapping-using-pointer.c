/* swap two variables using pointer */

#include <stdio.h>
void swap(int *, int *);
void main()
{
    int a, b;
    printf("Enter any two numbers, a and b\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("Now a is %d and b is %d\n", a, b);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
