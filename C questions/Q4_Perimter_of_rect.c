// Q4. Write a C program to enter length and breadth of a rectangle and find its perimeter.

#include <stdio.h>

int main(){
    float Perimeter,Length,Breath;
    printf("Enter The Lenght\n");
    scanf("%f",&Length);
    printf("Enter the breath\n");
    scanf("%f",&Breath);
    Perimeter = 2*(Length + Breath);
    printf("The Perimeter of Rectangle is %f\n",Perimeter);
    
    return 0;
}