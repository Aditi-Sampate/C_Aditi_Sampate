/*
Write a program of square give the input from user.
*/

#include<stdio.h>
#include<conio.h>

void square(int ino,int icnt)
{
    for(ino=1;ino<=icnt;ino++)
    {
        printf("%d\n",ino*ino);

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

    square(ino1,icnt1);

    return 0;

}