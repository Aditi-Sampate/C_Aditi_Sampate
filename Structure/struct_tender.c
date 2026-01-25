/*
    Write a program to print the tender's information in that print the name  ,
    company name and cost .
*/

#include<stdio.h>
#include<string.h>

struct tender
{
    char name [40];
    char com_name[60];
    int cost;
};

void display(struct tender s1)
{
    printf("Tender's Information :\n");
    printf("Name of the Tender =%s\n",s1.name);
    printf("Company Name =%s\n",s1.com_name);
    printf("Cost of the Tender =%d\n",s1.cost);
   
}

int main()
{
    struct tender s;

    printf("Enter the name of the tender =\n");
    scanf("%s",&s.name);

    printf("Enter the company name =\n");
    scanf("%s",&s.com_name);

    printf("Enter the cost of the tender=\n");
    scanf("%d",&s.cost);

    display(s);
}

