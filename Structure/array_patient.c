/*
    Write a program of patients information to print the name , age,mobile no
    and disease of the patient in the form of table using structure with array.
*/

#include<stdio.h>
#include<string.h>

struct patient
{
    char name[50];
    int age;
    int mobile_no;
    char disease[60];
};

int display(struct patient s1[100])
{
    int i,n;

    printf("Enter the number of patient =\n");
    scanf("%d",&n);

    printf("Name\t\t Age\t\t\t Mobile No\t\t\t Disease\t\t\n");
    printf("_________________________________________________________________________________________________________\n");

    for(i=1;i<=n;i++)
    {
        printf("%s\t\t",s1[i].name);
        printf("%d\t\t\t",s1[i].age);
        printf("%d\t\t\t",s1[i].mobile_no);
        printf("%s\t\t\t",s1[i].disease);
        
        printf("\n");
        

    }
    return 0;
}

int main()
{
    struct patient s[100];

    int n;
    int i;

    printf("Enter the number of patient =\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        {
            printf("Enter the name of the patients = ");
            scanf("%s",&s[i].name);
        }
        {
            printf("Enter the age of the patient=");
            scanf("%d",&s[i].age);
        }
        {
            printf("Enter the mobile number =");
            scanf("%d",&s[i].mobile_no);
        }
        {
            printf("Enter the disease of the patient =");
            scanf("%s",&s[i].disease);
        }
        printf("\n");
    }
    display(s);
    return 0;

}