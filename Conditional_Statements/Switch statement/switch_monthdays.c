//Write a program to find how many days in month using switch.

#include<stdio.h>
#include<conio.h>

void display(int month)
{
    switch(month)
    {
        case 1:
        printf("Month is January\nIn january month there are 31 days");
        break;

        case 2:
        printf("Month is Febuary\nIn Febuary month there are 28 days");
        break;

        case 3:
        printf("Month is March\nIn March month there are 31 days");
        break;

        case 4:
         printf("Month is April\nIn April month there are 30 days");
        break;

        case 5:
        printf("Month is May\nIn May month there are 31 days");
        break;

        case 6:
        printf("Month is June\nIn June month there are 30 days");
        break;

        case 7:
        printf("Month is July\nIn July month there are 31 days");
        break;

        case 8:
        printf("Month is Augest\nIn Augest month there are 31 days");
        break;

        case 9:
        printf("Month is September\nIn September month there are 30 days");
        break;

        case 10:
        printf("Month is Octomber\nIn Octomber month there are 31 days");
        break;

        case 11:
        printf("Month is November\nIn November month there are 30 days");
        break;

        case 12:
        printf("Month is December\nIn December month there are 31 days");
        break;

        default:
        printf("invalid month");

    }

}

int main()
{
    int month1;

    printf("Enter the any case number for month=");
    scanf("%d",&month1);

    display(month1);
    return 0;

}