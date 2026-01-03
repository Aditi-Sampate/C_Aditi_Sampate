/*
Write a program of ifelse ladder to find the angle is acute , right, obtuse give the angle from user.
*/

#include<stdio.h>
#include<conio.h>

void checkangle(int angle )
{
    if(angle>0 && angle<90)
    {
        printf("This is acute angle");
    }
    else if(angle==90)
    {
        printf("This is right angle");
    }
    else if(angle>90 && angle<=180)
    {
        printf("This is obtuse angle");
    }
    else
    {
        printf("There is no any angle");
    }
}

int main()
{
    int angle1;

    printf("Enter the value for angle=");
    scanf("%d",& angle1);

    checkangle(angle1);
    return 0;
}