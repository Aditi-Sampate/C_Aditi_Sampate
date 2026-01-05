/*
  Write a program of print the table using for loop.
*/

#include<stdio.h>
#include<conio.h>

void table(int b)
{
    int a;
    for(a=1;a<=10;a++)
    {
        
        printf("%d\n",a*b);

    }
}

int main()
{
    int m;

    printf("Enter the table number = ");
    scanf("%d",&m);
    table(m);
    return 0;

}