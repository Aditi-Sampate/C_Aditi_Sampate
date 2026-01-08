// Write a program of while loop print the number give the input from user .

#include<stdio.h>

void num(int ino,int icnt)
{
    while(ino<=icnt)
    {
        printf("%d\n",ino);
        ino++;
    }
}

int main()
{
    int ivalue1;
    int ivalue2;

    printf("Enter the first number =\n");
    scanf("%d",&ivalue1);

    printf("Enter the last number =\n");
    scanf("%d",&ivalue2);

    num(ivalue1,ivalue2);
    return 0;
}