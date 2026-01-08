/*
Write a program of print the number in decending order.
*/

#include<stdio.h>
#include<conio.h>

void display(int ino ,int icnt)
{
    while(ino<=icnt)
    {
        printf("%d\n",icnt);
        icnt--;
    }
}

int main()
{
    int ino1;
    int icnt1;
    printf("Etner the number=");
    scanf("%d",&ino1);
    printf("Enter the last number=");
    scanf("%d",&icnt1);


    display(ino1,icnt1);
    return 0;

}