#include <stdio.h>
    //Write a C program to print the sum of all the even elements and even position elements in an array.

int main(){
    int i,t,se=0,sep=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&t);
    int n[t];
    printf("Enter %d elements:\n",t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++){
        if(n[i]%2==0)
        se+=n[i];
        if(i%2==0)
        sep+=n[i];
    }
    printf("Sum of even elements: %d\n",se);
    printf("Sum of even position elements: %d\n",sep);
}
