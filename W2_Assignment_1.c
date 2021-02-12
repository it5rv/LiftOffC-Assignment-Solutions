#include <stdio.h>
    //Write a C program to calculate the sum of digits of a number.

int main()
{
    int i,t,sum=0;
    printf("Enter size of the number: ");
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++)
    {
        printf("Enter a digit: ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++){
        sum+=n[i];
    }
    printf("Sum of digits of the number=%d",sum);
}