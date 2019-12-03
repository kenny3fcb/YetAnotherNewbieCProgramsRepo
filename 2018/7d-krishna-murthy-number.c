#include <stdio.h>
int fact(int);
void main()
{
    int n, m, num = 0, r;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        num = num + fact(r);
        n = n / 10;
    }
    if (num == m)
        printf("%d is a Krishna Murthy number\n", m);
    else
        printf("%d is not a Krishna Murthy number\n", m);
}

int fact(int n)
{
    if (n <= 1)
        return (1);
    else
        return (n * fact(n - 1));
}
