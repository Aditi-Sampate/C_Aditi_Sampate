//Write a program to perform arithmatic operation in function.

#include<stdio.h>
#include<conio.h>
void display(int a,int b)
{
    
    int c=a+b;
    printf("Addition=%d\n",c);
    c=a-b;
    printf("subtraction=%d\n",c);
    c=a*b;
    printf("multiply=%d\n",c);
    c=a/b;
    printf("division=%d\n",c);
    
}

int main()
{
    int m;
    int n;
    
    printf("Enter the value for a=");
    scanf("%d",&m);

    printf("Enter the value for b=");
    scanf("%d",&n);
    
    display(m,n);
    return 0;
}