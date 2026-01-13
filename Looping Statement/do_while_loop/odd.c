/*
  Write a program to print the odd number using do while loop.
*/

#include<stdio.h>
#include<conio.h>

void even(int ino,int icnt)
{
    do
    {
        if(ino%2!=0)
        {
            printf("%d\n",ino);
        }
        
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

    printf("Enter the last number = ");
    scanf("%d",&icnt1);

    even(ino1,icnt1);
    return 0;
}