//Write a program to print the sum of the given number in function.

#include<stdio.h>
#include<conio.h>

void display(int n)
{
    int sum;
   
   int a=n%10;
    n=n/10;

   int b=n%10;
    n=n/10;

   int c=n%10;
    n=n/10;

    sum=a+b+c;
    printf("Sum of the number is =%d",sum);    
}

int main()
{
   
   int ino;

   printf("Enter the number=");
   scanf("%d",&ino);

   display(ino);
   return 0; 
}