// Q7. Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include <stdio.h>

int main(){
    float length,cm,m,km,a,b;
    printf("Enter the Length in cm\n");
    scanf("%f",&length);
    a = length/100;
    b = length/100000;
    printf("Length in Meter is: %f\n",a);
    printf("Length in Kilometer is: %f\n",b);
    return 0;
}