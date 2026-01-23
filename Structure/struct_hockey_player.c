/*
     Write a program to show the hockey players information in that print the name of the player ,
     wickets and runs using structure .
*/

#include<stdio.h>
#include<string.h>

struct hockey
{
    char name[60];
    int wicket;
    int run;
};

void display(struct hockey s1)
{
     printf("\n Hockey information : \n");
    printf("\n Player Name    : %s",s1.name);
    printf("\nWicket          : %d",s1.wicket);
    printf("\nRuns            : %d",s1.run);
}

int main()
{
    struct hockey s;

    printf("Enter hockey player name  =\n");
    scanf("%s",&s.name);
    printf("Enter the wickets =\n");
    scanf("%d",&s.wicket);
    printf("Enter the run =\n");
    scanf("%d",&s.run);

    display(s);
}

