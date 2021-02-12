#include <stdio.h>
    //Write a C program to find the largest and smallest element in an array.

int main()
{
    int i,t;
    printf("Enter number of elements in the array: ");
    scanf("%d",&t);
    int n[t];
    printf("Enter %d numbers:\n",t);
    for(i=0;i<t;++i)
    {
        scanf("%d",&n[i]);
    }
    int min=n[0],max=n[0];
    for(i=0;i<t;++i)
    {
        if(n[i]<min)
        min=n[i];
        if(n[i]>max)
        max=n[i];
    }
    printf("Largest element=%d\n",max);
    printf("Smallest element=%d\n",min);
}