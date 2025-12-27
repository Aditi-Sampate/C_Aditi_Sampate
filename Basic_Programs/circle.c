//Write a program of to find the area of circle in function.

#include<stdio.h>
#include<conio.h>

void display(int radius)
{
    float area;

    area=3.14*radius*radius;
    printf("Area of circle=%f",area);

}
int main()
{
    int r;
    
    printf("Enter the radius of circle=");
    scanf("%d",& r);

    display(r);
    return 0;

}