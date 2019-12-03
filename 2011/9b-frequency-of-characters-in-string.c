#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int count, i, j;
    puts("Enter a string");
    gets(s);
    printf("Frequency of characters present in the entered string is as follows:\n");
    for (i = 32; i <= 127; i++) {
        for (j = 0, count = 0; s[j] != '\0'; j++) {
            if (i == s[j])
                count++;
        }
        if (strchr(s, i))
            printf("%c = %d times\n", i, count);
    }
}
