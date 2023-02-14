// Q11. Write a C program to find power of any number x ^y.

#include <stdio.h>
#include <math.h>

int main(){
    float x,y;
    printf("Enter the Value of x\n");
    scanf("%f",&x);
    printf("Enter the Value of y\n");
    scanf("%f",&y);
    printf("The Value of x to the power y is: %f\n", pow(x,y)); 
    return 0;
}