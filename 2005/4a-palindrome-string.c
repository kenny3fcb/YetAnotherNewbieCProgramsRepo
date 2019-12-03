/* palindrome string */

#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    int l, i;
    puts("Enter any string");
    gets(s1);
    l = strlen(s1) - 1;
    for (i = 0; l >= 0; i++, l--)
        s2[i] = s1[l];
    s2[i] = '\0';
    if (strcmp(s1, s2) == 0)
        printf("'%s' is a palindrome string\n", s1);
    else
        printf("'%s' is not a palindrome string\n", s1);
}
