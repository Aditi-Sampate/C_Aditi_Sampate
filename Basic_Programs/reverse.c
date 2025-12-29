//Write a program of reverse of number in function.

#include<stdio.h>
#include<conio.h>

void display(int n)
{
    int rev;

   int a=n%10;
    n=n/10;

   int b=n%10;
    n=n/10;

   int c=n%10;
    n=n/10;

    rev=(a*100)+(b*10)+(c*1);
    printf("Reverse of number is =%d",rev);

}

int main()
{
    
    int number;

    printf("Enter the value for number=");
    scanf("%d",&number);

    display(number);
    return 0;

}