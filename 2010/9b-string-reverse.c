#include <stdio.h>
void main()
{
    char s[100];
    int i, l, temp;
    puts("Enter any string");
    gets(s);
    for (i = 0; s[i] != '\0'; i++);
    l = i - 1;
    for (i = 0; i < l; i++, l--) {
        temp = s[i];
        s[i] = s[l];
        s[l] = temp;
    }
    printf("Reversed string is %s\n", s);
}
