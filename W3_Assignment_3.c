//Write a program in C to find GCD and LCM of a number using recursion.
#include<stdio.h>

int gcd(int a,int b,int f){
    if(f==1)
    return 1;
    else if(a%f==0 && b%f==0)
    return f;
    else
    return gcd(a,b,--f);
}
int lcm(int a,int b,int m){
    if((a*m)%b==0)
    return a*m;
    else
    return lcm(a,b,++m);
}
int main(){
    printf("Enter two numbers: ");
    int a,b,g,l;
    scanf("%d%d",&a,&b);
    if(a>b){
        g=gcd(a,b,b);
        l=lcm(a,b,1);
    }
    else{
        g=gcd(a,b,a);
        l=lcm(b,a,1);
    }
    // l=(a*b)/g;   (LCM without recursion)
    printf("GCD=%d\n",g);
    printf("LCM=%d",l);
}
