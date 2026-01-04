/*
   Write a program of switch to calculate the arithmatic operator .
*/
#include<stdio.h>
#include<conio.h>

int display(int oper,int a,int b,int c)
{
    switch(oper)
    {
        case 1:
        c=a+b;
        printf("Adition=[%d]",c);
        break;

        case 2:
        c=a-b;
        printf("Subtraction=[%d]",c);
        break;

        case 3:
        c=a*b;
        printf("Multiplication=[%d]",c);
        break;

        case 4:
        c=a/b;
        printf("Division=[%d]",c);
        break;

        case 5:
        c=a%b;
        printf("Modulus=[%d]",c);
        break;

        default:
        printf("invalid case");

    }
    return 0;
}

int main()
{
    int oper1;
    int m;
    int n;
    int o;

   
    printf("Enter the value for a=");
    scanf("%d",&m);

    printf("Enter the value for b=");
    scanf("%d",&n);

    printf("Enter the operator which you want to do=");
    scanf("%d",&oper1);

    
    return display(oper1,m,n,o);

}