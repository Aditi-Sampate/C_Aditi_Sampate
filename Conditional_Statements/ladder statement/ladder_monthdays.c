/*
  write a program to input nonth number and print number of days in that month.
*/
#include<stdio.h>
#include<conio.h>

int day(int month)
{
    if(month==1)
    {
        printf("Month is January\nIn january month there are 31 days");
    }

    else if(month==2)
    {
        printf("Month is Febuary\nIn Febuary month there are 28 days");
    }
    
    else if(month==3)
    {
        printf("Month is March\nIn March month there are 31 days");
    }

    else if(month==4)
    {
        printf("Month is April\nIn April month there are 30 days");
    }

    else if(month==5)
    {
        printf("Month is May\nIn May month there are 31 days");
    }

    else if(month==6)
    {
        printf("Month is June\nIn June month there are 30 days");
    }

    else if(month==7)
    {
        printf("Month is July\nIn July month there are 31 days");
    }

    else if(month==8)
    {
        printf("Month is Augest\nIn Augest month there are 31 days");
    }

    else if(month==9)
    {
        printf("Month is September\nIn September month there are 30 days");
    }

    else if(month==10)
    {
        printf("Month is Octomber\nIn Octomber month there are 31 days");
    }

    else if(month==11)
    {
        printf("Month is November\nIn November month there are 30 days");
    }

    else if(month==12)
    {
        printf("Month is December\nIn December month there are 31 days");
    }

    else
    {
        printf("your enterd number is invalid");
    }
    return 0;

}

int main()
{
    int days;

    printf("Enter the any number for watch the in month how many days= ");
    scanf("%d",&days);

    return day(days);
}