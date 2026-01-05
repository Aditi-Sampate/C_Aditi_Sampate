/*
Write a program of square and add 50 in the square give the input.
*/

#include<stdio.h>
#include<conio.h>

void square(int ino,int icnt)
{
    for(ino=1;ino<=icnt;ino++)
    {
        printf("%d\n",ino*ino+50);

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