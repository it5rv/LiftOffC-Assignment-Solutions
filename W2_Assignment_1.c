#include<stdio.h>
    //Write a C program to calculate the sum of digits of a number.
void main()
{
    int n,m,d,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        d=m%10;
        sum+=d;
        m=m/10;
    }
    printf("Sum of digits: %d",sum);
}
