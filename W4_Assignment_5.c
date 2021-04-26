// WAP in C to check whether a given substring is present in the given string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check(char *a,char*b){
    int c=0,p;
    for(int i=0;i<strlen(a);i++){
        if(*(a+i)==*b){
            p=i;
            c=1;
            ++i;
            while(*(a+i)==*(b+i-p)){
                c=1;
                ++i;
            }
            if(i-p==strlen(b))
            return c;
            else
            continue;
        }
    }
    return 0;
}

int main(){
    char *s1=(char*)malloc(1000*sizeof(char));
    char *s2=(char*)malloc(1000*sizeof(char));
    printf("Enter a string: ");
    scanf("%[^\n]",s1);
    printf("Enter a substring: ");
    scanf("\n");
    scanf("%[^\n]",s2);
    strcat(s1," ");
    if(check(s1,s2))
    printf("Substring is present in the string.");
    else
    printf("Substring is not present in the string.");
    return 0;
}