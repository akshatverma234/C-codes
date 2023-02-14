//Q17. Write a C program to enter P. T. Rand calculate Simple Interest.

#include <stdio.h>

int main()
{
    float P, T, R, Simple_Interest;
    printf("Enter the principal\n");
    scanf("%f", &P);
    printf("Enter the Rate of Interest\n");
    scanf("%f", &R);
    printf("Enter the Time\n");
    scanf("%f", &T);
    Simple_Interest = (P * R * T)/100.0;
    printf("The Simple Interest is: %f\n", Simple_Interest);

    return 0;
}