/*
     Write a program of ifelse ladder to perform  the calculator give the value from user .
*/

#include<stdio.h>
#include<conio.h>

void display(char operator,int a,int b,int c)
{
    if(operator=='+')
    {
        c=a+b;
        printf("Adition of two variable is=%d",c);
    }
    else if(operator=='-')
    {
        c=a-b;
        printf("Subtraction of two vaariable is=%d",c);
    }
    else if(operator=='*')
    {
        c=a*b;
        printf("Multiplication of two variable is=%d",c);
    }
    else if (operator=='/')
    {
        c=a/b;
        printf("Division of two variable is=%d",c);

    }
    else if (operator=='%')
    {
        c=a%b;
        printf("Modulus of two variable is=%d",c);
    }

    else{
        printf("Given operator is not applicable to this condition");
    }
}

int main()
{
    char oper;
    int m;
    int n;
    int o;

    printf("Enter the operator do you want to perform=");
    scanf("%c",&oper);

    printf("Enter the value for a=");
    scanf("%d",&m);

    printf("Enter the value for b=");
    scanf("%d",&n);


    display(oper,m,n,o);
    return 0;
}