/*
    Write a program of student information print the name ,roll no, and 
    three subjects marks in the table form using structure with array.
*/
#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll_no;
    int physics,chem,maths;

};

int display(struct student s1[100])
{
    int i,n;

    printf("Enter the number of students =\n");
    scanf("%d",&n);

    printf("Name\t\t Roll No\t\t Physics\t\t Chemistry\t\t Maths\t\t\n");
    printf("_________________________________________________________________________________________________________\n");

    for(i=1;i<=n;i++)
    {
        printf("%s\t\t",s1[i].name);
        printf("%d\t\t\t",s1[i].roll_no);
        printf("%d\t\t\t",s1[i].physics);
        printf("%d\t\t\t",s1[i].chem);
        printf("%d\t\t\t",s1[i].maths);
        printf("\n");
        

    }
    return 0;
}

int main()
{
    struct student s[100];

    int n,i;

    printf("Enter the number of students =\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        {
            printf("Enter the students name =");
            scanf("%s",&s[i].name);
        }

        {
            printf("Enter the roll no =");
            scanf("%d",&s[i].roll_no);
        }

        {
            printf("enter the marks of physics =");
            scanf("%d",&s[i].physics);

        }

        {
            printf("Enter the marks of chem =");
            scanf("%d",&s[i].chem);
        }

        {
            printf("Enter the marks of maths =");
            scanf("%d",&s[i].maths);

        }
        printf("\n");
    }

    display(s);
    return 0;
}