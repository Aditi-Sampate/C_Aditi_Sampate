/*
    Write a program to print the employee's information in that print the name of the employee ,
    age , salary and education .
*/

#include<stdio.h>
#include<string.h>

struct employer 
{
    char name[60];
    int age;
    int salary;
    char education[50]; 
};

void display(struct employer s1)
{
    printf("\nEmployee's Information :\n");
    printf("Employee's Name: %s\n",s1.name);
    printf("Age:%d\n",s1.age);
    printf("salary:%d\n",s1.salary);
    printf("education:%s\n",s1.education);
}

int main()
{
    struct employer s;

    printf("Enter the name of the employee =\n");
    scanf("%s",&s.name);

    printf("Enter the age of the employee =\n");
    scanf("%d",&s.age);

    printf("Enter the salary of the employee =\n");
    scanf("%d",&s.salary);

    printf("Enter the education of the employee =\n");
    scanf("%s",&s.education);

    display (s);
}