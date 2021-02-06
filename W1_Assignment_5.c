#include <stdio.h>
#include <ctype.h>
    //Write a C program to check whether an alphabet is vowel or consonant using switch case.

void main(){
    printf("Enter the alphabet\n");
    char a;
    scanf("%c",&a);
    switch (toupper(a)){
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
}