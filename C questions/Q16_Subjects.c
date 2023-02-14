// Q6. Write a C program to enter marks of five subjects and calculate total, average and percentage.

#include <stdio.h>

int main()
{
    float marks, Total, Average, Percentage;
    printf("Enter your marks of physics:\n");
    scanf("%f",&marks);
    printf("Enter your marks of chemistry:\n");
    scanf("%f",&marks);
    printf("Enter your marks of maths:\n");
    scanf("%f",&marks);
    printf("Enter your marks of english:\n");
    scanf("%f",&marks);
    printf("Enter your marks of hindi:\n");
    scanf("%f",&marks);
    Total = marks+marks+marks+marks+marks;
    Average = Total / 5.0;
    Percentage = (Total / 500.0) * 100;
    printf("The Total Marks you get: %f\n", Total);
    printf("The Average Marks you get: %f\n", Average);
    printf("The Percentage Marks you get: %f\n", Percentage);
    return 0;
}
