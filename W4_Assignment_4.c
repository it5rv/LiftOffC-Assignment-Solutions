// WAP in C to store and display the name of your favorite book and the author’s name using union.

#include<stdio.h>

union book{
    char bname[1000];
    char aname[1000];
};

int main(){
    union book store;
    printf("Enter the name of your favorite book: ");
    scanf("%[^\n]",&store.bname);
    printf("Favourite book: ");
    puts(store.bname);
    printf("Enter author's name: ");
    scanf("\n");
    scanf("%[^\n]",&store.aname);
    printf("Author: ");
    puts(store.aname);
    return 0;
}