// Q6. Write a C program to enter radius of a circle and find its diameter, circumference and area.

#include <stdio.h>

int main(){
    float radius,Diameter,Circumference,Area, pi;
    printf("Enter the Radius of Circle\n");
    scanf("%f",&radius);
    pi = 3.14;
    Diameter = 2*radius;
    Circumference = 2*pi*radius;
    Area = pi*radius*radius;
    printf("The Diamter of circle is: %f\n",Diameter);
    printf("The Circumference of circle is: %f\n",Circumference);
    printf("The Area of circle is: %f\n",Area);

    return 0;
}