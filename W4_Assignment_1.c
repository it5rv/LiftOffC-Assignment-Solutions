// C program to add two matrices

#include<stdio.h>
#include<stdlib.h>

int row,col;

void input(int *x){
    for(int i=0;i<row;i++){
        printf("Enter row %d elements:\n",i+1);
        for(int j=0;j<col;j++){
            scanf("%d",x+i*col+j);
        }
        printf("\n");
    }
}

void print(int *x){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",*(x+i*col+j));
        }
        printf("\n");
    }
    printf("\n");
}

void add(int *x,int *y,int *z){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            *(z+i*col+j)=*(x+i*col+j)+*(y+i*col+j);
        }
    }
}

int main(){
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&row,&col);
    int s=row*col;
    int *m= (int*)malloc(s*sizeof(int));
    int *n= (int*)malloc(s*sizeof(int));
    int *r= (int*)malloc(s*sizeof(int));
    printf("Enter elements of Matrix 1:\n\n");
    input(m);
    printf("Enter elements of Matrix 2:\n\n");
    input(n);
    add(m,n,r);
    printf("The resultant matrix is:\n");
    print(r);
    return 0;
}
