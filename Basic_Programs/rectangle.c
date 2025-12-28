//Write a program of to find the area of rectangle in function.

#include<stdio.h>
#include<conio.h>

void display(int length,int bredth)
{
    float area;

    area=length*bredth;
    printf("Area of rectangle=%f",area);
}

int main()
{
    int l;
    int b;

    printf("Enter the value for length=");
    scanf("%d",&l);

    printf("Enter the value for bredth=");
    scanf("%d",&b);

    display(l,b);
    return 0;

}