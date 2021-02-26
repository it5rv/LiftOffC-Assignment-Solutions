//Write a program in C to find factorial of a number using function.
#include<stdio.h>

long long factorial(long long n){
    long long f=1;
    while(n){
        f=f*n;
        n--;
    }
    return f;
}
int main(){
    printf("Enter a number: ");
    long long n;
    scanf("%lld",&n);
    printf("%lld",factorial(n));
}