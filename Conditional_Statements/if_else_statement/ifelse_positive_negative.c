/*
 Write a program of the given number is positive or negative.
*/

#include<stdio.h>
#include<conio.h>

int display(int ino)
{
    if(ino>0)
    {
        ino=-ino;
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }

  return 0;
}

int main()
{
    int n;

    printf("Enter the number =");
    scanf("%d",&n);

    return display(n);
}
