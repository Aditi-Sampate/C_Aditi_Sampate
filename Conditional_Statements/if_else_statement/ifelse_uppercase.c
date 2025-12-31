/*
 Write a program of ifelse enter the any character find the entered character is alphabet or not.
*/

#include<stdio.h>
#include<conio.h>

int display(char ch)
{
    if(ch>='a'&& ch<='z' || ch>='A' && ch<='Z')
    {
        printf("character is alphabet");
    }
    else
    {
        printf("Character is not alphabet ");

    }
    return 0;
}

int main()
{
    char char1;

    printf("Enter the any alphabet=");
    scanf("%c",&char1);

    return display(char1);
}