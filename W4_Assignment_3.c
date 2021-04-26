// WAP in C to store the name and roll no. of 5 students using an array of structures.

#include<stdio.h>

struct student{
    char name[100];
    int roll;
};

int main(){
    struct student arr[5];
    printf("Enter Name and Roll no of 5 students:\n");
    for(int i=0; i<5; i++){
        scanf("%d\n",&arr[i].roll);
        scanf("%[^\n]",&arr[i].name);
    }
    printf("\nThe 5 students are:\n");
    for(int i=0; i<5; i++){
        printf("%d : ",arr[i].roll);
        puts(arr[i].name);
    }
    return 0;
}