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
    if(b!=0)
    {
        printf("Quotient=%d\n",a/b);
        printf("Remainder=%d\n",a%b);
    }
    else
        printf("Divisible by zero not possible");
    return 0;
}
