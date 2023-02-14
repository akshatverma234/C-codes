// Q12. Write a C program to enter any number and calculate its square root. 

#include <stdio.h>
#include <math.h>

int main(){
    float x;
    printf("Enter the Value of x\n");
    scanf("%f",&x);
    printf("The Square root of x is: %f\n", sqrt(x)); 
    return 0;
}