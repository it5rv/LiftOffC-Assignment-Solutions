#include<stdio.h>
    /* Write a program to print given patterns using loops :
        
        *       *
          *   *
            *
          *   *
        *       *
    */
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==j)
            printf("*");
            else if((i==1&&j==5)||(i==2&&j==4)||(i==4&&j==2)||(i==5&&j==1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}