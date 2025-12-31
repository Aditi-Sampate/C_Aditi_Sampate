/* 
Write a program to check leap year or not using if else.
*/

#include<stdio.h>
#include<conio.h>

void leap(int ino)
{
    if(ino%4==0)
    {
        printf("This is leap year");
    }
    else
    {
        printf("This is not leap year");
    }
}

int main()
{
    int ino1;

    printf("Enter the year=");
    scanf("%d",&ino1);

    leap(ino1);
    return 0;
}