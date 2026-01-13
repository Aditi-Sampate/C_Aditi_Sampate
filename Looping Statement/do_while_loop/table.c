/*
  Write a program to print the table using do while loop. 
*/

#include<stdio.h>
#include<conio.h>

void table(int b)
{
    int a=1;
    do
    {
        printf("%d\n",a*b);
        a++;
    }
    while(a<=10);
    
    
}

int main()
{
    int m;
    int n=1;

    printf("Enter the any table number = ");
    scanf("%d",&m);

    table(m);
    return 0;

}