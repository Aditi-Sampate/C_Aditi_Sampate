/*
Write a program of leap year using while loop to find the leap year.
*/

#include<stdio.h>
#include<conio.h>

void leap(int ino,int icnt)
{
    while(ino<=icnt)
    {
      if(ino%4==0)
      {
        printf("%d\n",ino);
      }
        ino++;
    }
}

int main()
{
    int ino1;
    int icnt1;
    printf("Enter the first year =");
    scanf("%d",&ino1);

    printf("Enter the any last year =");
    scanf("%d",&icnt1);

    leap(ino1,icnt1);

    return 0;
}