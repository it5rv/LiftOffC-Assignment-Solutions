// WAP in C to print a string in reverse using a pointer.

#include<stdio.h>
#include<stdlib.h>

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