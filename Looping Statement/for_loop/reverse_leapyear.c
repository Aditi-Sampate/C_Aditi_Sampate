/*
  Write a program of for loop to print the reverse of 
  leap year give the value of year form user.
*/

#include<stdio.h>
#include<conio.h>

void reverse(int ino,int icnt)
{
    for(icnt=icnt;icnt>=ino;icnt=icnt-4)
    {
        printf("%d\n",icnt);
    }
}

int main()
{
    int ino1;
    int icnt1;

    printf("Enter the value for ino1=");
    scanf("%d",&ino1);

    printf("Enter the value for icnt1=");
    scanf("%d",&icnt1);
    reverse (ino1,icnt1);

    return 0;


}



