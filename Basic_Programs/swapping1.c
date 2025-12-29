//Write a program of swapping of three variable in function.

#include<stdio.h>
#include<conio.h>

void display(int a,int b,int c)
{
    c=a;
    a=b;
    b=c;

    printf("Swapping of two variable=%d\n",a);
    printf("Swapping of two variable=%d\n",b);

}

int main()
{
    int m;
    int n;
    int o;

    printf("Enter the value for a=\n");
    scanf("%d",&m);

    printf("Enter the value for b=\n");
    scanf("%d",&n);

    display(m,n,o);
    return 0;

}