/*
     Write a program of ifelse ladder to perform  the calculator give the value from user .
*/
#include<stdio.h>
#include<conio.h>

void display(int operator,int a,int b,int c)
{
    if(operator==11)
    {
        c=a+b;
        printf("Adition of two variable is=%d",c);
    }
    else if(operator==12)
    {
        c=a-b;
        printf("Subtraction of two vaariable is=%d",c);
    }
    else if(operator==13)
    {
        c=a*b;
        printf("Multiplication of two variable is=%d",c);
    }
    else if (operator==14)
    {
        c=a/b;
        printf("Division of two variable is=%d",c);

    }
    else if (operator==15)
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
    int oper;
    int m;
    int n;
    int o;

    printf("Enter the operator do you want to perform=");
    scanf("%d",&oper);

    printf("Enter the value for a=\n");
    scanf("%d",&m);

    printf("Enter the value for b=\n");
    scanf("%d",&n);


    display(oper,m,n,o);
    return 0;
}