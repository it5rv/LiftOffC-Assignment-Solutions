#include <stdio.h>
    //Write a C program to enter the radius of a circle and find its diameter,circumference and area.

void main(){
    printf("Enter radius of the circle\n");
    float r;
    scanf("%f",&r);
    printf("Diameter=%f\n",2*r);
    printf("Circumference=%f\n",2*3.14159265*r);
    printf("Area=%f\n",4*3.14159265*r*r);
}
