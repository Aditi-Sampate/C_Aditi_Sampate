//Write a program to calculate simple interest in function.

#include<stdio.h>
#include<conio.h>

void display(int principle,int rate,int year)
{
    float sim_interest;

    sim_interest=principle*rate*year;

    printf("Simple interest is =%f",sim_interest);
}

int main()
{
    int r;
    int y;
    int p;

    printf("Enter the value for principle=");
    scanf("%d",&p);

    printf("Enter the value for rate=");
    scanf("%d",&r);

    printf("Enter the value for year=");
    scanf("%d",&y);
    
    display(p,r,y);
    return 0;
}