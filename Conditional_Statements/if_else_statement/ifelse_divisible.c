/*
 Write a program of ifelse and check the given number is divisible by 5 or 11 or not.
*/

#include<stdio.h>
#include<conio.h>

int divisible(int ino)
{
    if((ino%5==0)||(ino%11==0))
    {
        printf("The given number is divisible by 5 or 11");
    }
    else
    {
        printf("The given number is not divisible by 5 or 11");

    }
    return 0;
}

int main()
{
    int ino1;
    printf("Enter any number =");
    scanf("%d",&ino1);

    return divisible(ino1);
}