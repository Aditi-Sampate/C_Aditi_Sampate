/*
  Write a program of switch enter the case number and check the  days 
  give the case number from user.
*/

#include<stdio.h>
#include<conio.h>

void display(int day)
{
    switch(day)
    {
        case 1:
        printf("Sunday");
        break;

        case 2:
        printf("Monday");
        break;

        case 3:
        printf("Tuesday");
        break;

        case 4:
        printf("Wednesday");
        break;

        case 5:
        printf("Thursday");
        break;

        case 6:
        printf("Friday");
        break;

        case 7:
        printf("Saturday");
        break;

        default:
        printf("invalid case ");
    }
}

int main()
{
    int days;

    printf("Enter the case number for day=");
    scanf("%d",&days);

    display(days);
    return 0;

}