//Write a program in C to find whether a number is palindrome or not using recursion.
#include<stdio.h>
#include<math.h>
int digits(int n){
    int d=0;
    while(n){
        n/=10;
        ++d;
    }
    return --d;
}
int reverse(int n){
    if(n==0)
    return 0;
    else
    return ((n%10)*pow(10,digits(n)))+reverse(n/10);
}
int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    if(n==reverse(n))
    printf("Palindrome Number");
    else
    printf("Not a Palindrome Number");
    return 0;
}
