/**
 * C program to calculate Compound Interest
 */

#include <stdio.h>
#include <math.h>
// Study with - Abhishek
int main()
{
    float principle, rate, time, CI;

    /* Input principle, time and rate */
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    /* Calculate compound interest */
    CI = principle* (pow((1 + rate / 100), time));

    /* Print the resultant CI */
    printf("Compound Interest = %f", CI);
// coding is fun
    return 0;
}
