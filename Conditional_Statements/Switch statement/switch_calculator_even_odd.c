/*
   Write a program of switch to calculate the arithmatic operator 
   and check the value is even or odd .
*/

#include<stdio.h>
#include<conio.h>

int display(int oper,int a,int b,int c)
{
    switch(oper)
    {
        case 1:
        c=a+b;
        printf("Addition=[%d]\n",c);

        if(c%2==0)
        {
            printf("Addition is even[%d]",c);
        }
        else
        {
            printf("Addition is odd[%d]",c);
        }

        break;

        case 2:
        c=a-b;
        printf("Subtraction=[%d]\n",c);

        if(c%2==0)
        {
            printf("Subtraction is even[%d]",c);
        }
        else
        {
            printf("Subtraction is odd[%d]",c);
        }
        break;

        case 3:
        c=a*b;
        printf("Multiplication=[%d]\n",c);

        if(c%2==0)
        {
            printf("Multiplication is even[%d]",c);
        }
        else
        {
            printf("Multiplication is odd[%d]",c);
        }
        break;

        case 4:
        c=a/b;
        printf("Division=[%d]\n",c);

        if(c%2==0)
        {
            printf("Division is even[%d]",c);
        }
        else
        {
            printf("Division is odd[%d]",c);
        }
        break;

        case 5:
        c=a%b;
        printf("Modulous=[%d]\n",c);

        if(c%2==0)
        {
            printf("Modulous is even[%d]",c);
        }
        else
        {
            printf("Modulous is odd[%d]",c);
        }
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