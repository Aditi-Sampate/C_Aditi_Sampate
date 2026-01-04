/*
  Write a program of switch to check the month enter any case number.
*/

#include<stdio.h>
#include<conio.h>

int display(int month)
{
    switch(month)
    {
        case 1:
        printf("January");
        break;

        case 2:
        printf("Febuary");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;

        case 8:
        printf("Augest");
        break;

        case 9:
        printf("September");
        break;

        case 10:
        printf("October");
        break;

        case 11:
        printf("November");
        break;

        case 12:
        printf("December");
        break;

        default:
        printf("invalid month");

    }
    return 0;
}

int main()
{
    int month1;

    printf("Enter the any case number for month=");
    scanf("%d",&month1);

    return display(month1);

}