// Q13. Write a C program to enter two angles of a triangle and find the third angle.

#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter the two angles\n");
    scanf("%f%f",&a,&b);
    c = 180 -(a+b);
    printf("The Value of Third Angle is %f\n",c); 
    return 0;
}