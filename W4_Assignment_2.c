// WAP in C to print a string(max length 100) in reverse using a pointer.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    printf("Enter length of string: ");
    int n;
    scanf("%d\n",&n);
    // char str[100];
    char *p=(char*)malloc(n*sizeof(char));
    // fgets(str,100,stdin);
    for(int i=0;i<n;i++){
        scanf("%c",p+i);
    }
    for(int i=n-1;i>=0;--i){
        printf("%c",*(p+i));
    }
    return 0;
}