//Write a program of swapping of two variable in function.

#include<stdio.h>
#include<conio.h>

void display(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Swapping of two variable=%d\n",a);
    printf("Swapping of two variable=%d\n",b);

}

int main()
{
    int m;
    int n;

    printf("Enter the value for a=\n");
    scanf("%d",&m);

    printf("Enter the value for b=\n");
    scanf("%d",&n);

    display(m,n);
    return 0;

}