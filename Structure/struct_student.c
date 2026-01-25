/*
    Write a program to store and display the name , 
    roll number and fees of a student using structure .
*/

#include<stdio.h>
#include<string.h>

    struct student
    {
        char name[30];
        int roll_no;
        float fees;
    };


void display(struct student s2)
{
    printf("\n Student Detail : \n");
    printf("\nName    : %s",s2.name);
    printf("\nRoll_no : %d",s2.roll_no);
    printf("\nFees    : %f",s2.fees);

}

int main()
{
    struct student s1;

    printf("Enter student name  =\n");
    scanf("%s",&s1.name);
    printf("Enter the students roll_no =\n");
    scanf("%d",&s1.roll_no);
    printf("Enter the students fees =\n");
    scanf("%f",&s1.fees);

    display(s1);
}

