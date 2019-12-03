/* Determine how much money is in a piggy bank containing several 50, 25, 20, 10 and 5 paise coins */

#include <stdio.h>
void main()
{
    int fifties, twentyfives, twenties, tens, fives;
    printf("How many 50, 25, 20, 10 and 5 paise coins are there in the piggy bank?\n");
    scanf("%d%d%d%d%d", &fifties, &twentyfives, &twenties, &tens, &fives);
    printf("Total money in the piggy bank is Rs. %.2f\n", fifties * .5 + twentyfives * .25 + twenties * .2 + tens * .1 + fives * .05);
}
