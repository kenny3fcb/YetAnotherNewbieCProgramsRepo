#include <stdio.h>
void main()
{
    char s[100], *p;
    int i, l, temp;
    p = s;
    puts("Enter any string");
    gets(s);
    for (i = 0; *(p + i) != '\0'; i++);
    l = i - 1;
    for (i = 0; i < l; i++, l--) {
        temp = *(p + i);
        *(p + i) = *(p + l);
        *(p + l) = temp;
    }
    puts(s);
}
