#include <stdio.h>
    /*Write a C program to input marks of five subjects Physics, Chemistry, Biology,Mathematics and Computer.
    Calculate percentage and grade according to following:
    Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F*/

void main(){
    printf("Enter marks in the following format: Physics Chemistry Biology Mathematics Computer\n");
    int phy,ch,bio,math,comp;
    scanf("%d %d %d %d %d",&phy,&ch,&bio,&math,&comp);
    float per=(phy+ch+bio+math+comp)/5.0;
    if (per>=90)
    printf("Grade A");
    else if(per>=80)
    printf("Grade B");
    else if(per>=70)
    printf("Grade C");
    else if(per>=60)
    printf("Grade D");
    else if(per>=40)
    printf("Grade E");
    else
    printf("Grade F");
}