// Q6. Write a C program to enter marks of five subjects and calculate total, average and percentage.

#include <stdio.h>

int main()
{
    float maths, science, english, hindi, bio, Total, Average, Percentage;
    printf("The marks of Maths,Science,English,Hindi,Bio is:\n");
    scanf("%f%f%f%f%f", &maths, &science, &english, &hindi, &bio);
    Total = maths + science + english + hindi + bio;
    Average = Total / 5.0;
    Percentage = (Total / 500.0) * 100;
    printf("The Total Marks you get: %f\n", Total);
    printf("The Average Marks you get: %f\n", Average);
    printf("The Percentage Marks you get: %f\n", Percentage);
    return 0;
}