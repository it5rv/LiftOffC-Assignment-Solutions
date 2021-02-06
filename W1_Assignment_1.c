#include <stdio.h>
    //Write a C program to enter two numbers and perform all arithmetic operations.

int main()
{
    printf("Enter two numbers\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Addition=%d \n",a+b);
    printf("Subtraction=%d\n",a-b);
    printf("Multiplication=%d\n",a*b);
    printf("Quotient=%d\n",a/b);
    printf("Remainder=%d\n",a%b);
    return 0;
}