/* input n numbers in an array and print them */
/* wrong question? */

#include <stdio.h>
void main()
{
    int a[100], n, i;
    printf("How many numbers you want to input?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element [%d]\n", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The inputted array is as follows\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}    
