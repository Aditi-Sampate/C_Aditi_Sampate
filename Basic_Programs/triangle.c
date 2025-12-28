//Write a program of to find the area of triangle in function.

#include<stdio.h>
#include<conio.h>

void display(int height,int base)
{

    float area;

    area=height*base/2;
    printf("Area of triangle= %f ",area);
}

int main()
{
    int h;
    int b;

    printf("Enter the value for height=");
    scanf("%d",&h);

    printf("Enter the value for base=");
    scanf("%d",&b);

    display(h,b);
    return 0;

}