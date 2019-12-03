#include <stdio.h>
void main()
{
    float basic, da, hra, pf, gross, net;
    printf("Enter the basic salary of the empolyee\n");
    scanf("%f", &basic);
    da = basic * 55 / 100;
    hra = basic * 15 / 100;
    gross = basic + da + hra;
    pf = gross * 12.5 / 100;
    net = gross - pf;
    printf("Net salary of the employee is %0.2f\n", net);
}
