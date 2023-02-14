// Q5. Write a C program to enter length and breadth of a rectangle and find its area.

#include <stdio.h>

int main(){
    float Area,length,breadth;
    printf("Enter The Lenght\n");
    scanf("%f",&length);
    printf("Enter the breadth\n");
    scanf("%f",&breadth);
    Area = length*breadth; 
    printf("The Area of Rectangle is %f\n",Area);
    
    return 0;
}