/*
    Write a program to print the square using do while loop.
*/

#include<stdio.h>
#include<conio.h>

void square(int ino,int icnt)
{
    do
    {
        printf("%d\n",ino*ino);
        ino++;
    } 
    while (ino<=icnt);
    

}

int main()
{
    int ino1;
    int icnt1;

    printf("Enter the first number = ");
    scanf("%d",&ino1);

    printf("Enter the second number = ");
    scanf("%d",&icnt1);

    square(ino1,icnt1);
    return 0;

}