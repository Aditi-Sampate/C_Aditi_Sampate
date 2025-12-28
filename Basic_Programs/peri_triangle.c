//Write a program of to find the perimeter of triangle in function.

#include<stdio.h>
#include<conio.h>

void display(int length,int base,int height)
{
    float perimeter;

    perimeter=length+base+height;
    printf("Perimeter of triangle=%f",perimeter);
}

int main()
{
    int l;
    int b;
    int h;

    printf("Enter the value for length=");
    scanf("%d",&l);

    printf("Enter the value for base=");
    scanf("%d",&b);
     
    printf("Enter the value for height=");
    scanf("%d",&h);

    display(l,b,h);
    return 0;
    
}