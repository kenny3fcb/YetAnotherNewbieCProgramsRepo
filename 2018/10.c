/* write a function that will scan a string passes as argument and convert all lowercase to uppercase alphabets */

#include <stdio.h>
void upperstr(char []);
void main()
{
    char s[100], i;
    puts("Enter a character string");
    gets(s);
    upperstr(s);
    printf("Entered string converted to uppercase = %s\n", s);
}

void upperstr(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 97)
            s[i] = s[i] - 32;
    }
}
