#include <stdio.h>
#include <string.h>
    //Write a C program to count the total number of words in a string

int main()
{
    int i,wc=0;
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]%*c",&str);
    str[50]=strcat(str," ");
    for(i=0;i<sizeof(str);i++)
    {
        if(str[i]==' ')
        ++wc;
    }
    printf("Number of words in the string=%d",wc);
}