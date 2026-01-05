/*
Write a program of cube give the value from user.
*/

#include<stdio.h>
#include<conio.h>

void cube(int ino,int icnt)
{
    for(ino=ino;ino<=icnt;ino++)
    {
        printf("%d\n",ino*ino*ino);

    }
}

int main()
{
    int ino1;
    int icnt1;

    printf("Enter the number for ino=");
    scanf("%d",&ino1);

    printf("Enter the number for icnt=");
    scanf("%d",&icnt1);

    cube(ino1,icnt1);

    return 0;

}