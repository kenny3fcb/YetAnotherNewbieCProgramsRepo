/* using pointer find out the length of a given string without strlen() function */

#include <stdio.h>
void main()
{
    char s[100], *p;
    int i;
    p = s;
    puts("Enter any string");
    gets(s);
    for (i = 0; *(p + i) != '\0'; i++);
    printf("Length of '%s' is %d\n", s, i);
}
