/*
    Write a program to print the alphabet using do while loop.
*/

#include<stdio.h>
#include<conio.h>

void alphabet(char a,char b)
{
    do
    {
        printf("%c\t",a);
        a++;

    } 
    while (a<=b);
    
}

int main()
{
    char first;
    char second;

    alphabet(first='a',second='z');
    return 0;

}