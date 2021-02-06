#include <stdio.h>
    //Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

int main()
{
    printf("Enter temperature in Celsius\n");
    float tc,tf;
    scanf("%f",&tc);
    tf= (tc*(9.0/5.0))+32;
    printf("Temperature in fahrenheit=%f",tf);
    return 0;
}