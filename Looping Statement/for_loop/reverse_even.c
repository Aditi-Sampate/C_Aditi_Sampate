/*
  Write a program to print the reverse of even number using for loop.
*/

#include<stdio.h>
#include<conio.h>

void reverse(int ino,int icnt)
{
    for(icnt=icnt;icnt>=ino;icnt--)
    {
        if(icnt%2==0)
        {
          printf("%d\n",icnt);
        }
    }
      
}

int main()
{
    int ino1;
    int icnt1;

    printf("Enter the first number= ");
    scanf("%d",&ino1);
    printf("Enter the last number= ");
    scanf("%d",&icnt1);

    reverse(ino1,icnt1);
    return 0;

}