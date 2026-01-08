/*
Write a program of while loop to check even number give the value from user.
*/

#include<stdio.h>
#include<conio.h>

void even(int ino,int icnt)
{
    while(ino<=icnt)
    {
        printf("%d\n",ino);
        ino=ino+2;
    }
}

int main()
{
    int n1;
    int c1;
    printf("Enter the first even number =");
    scanf("%d",&n1);

    printf("Enter the any last number =");
    scanf("%d",&c1);

    even(n1,c1);

    return 0;
}