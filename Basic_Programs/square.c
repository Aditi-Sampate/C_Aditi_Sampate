//Write a program of to find the area of square in function

#include<stdio.h>
#include<conio.h>

void display(int side)
{
    float area;

    area=side*side;
    printf("Area of square=%f",area);
}

int main()
{
    int side1;

    printf("Enter the value for side=");
    scanf("%d",&side1);

    display(side1);
    return 0;

}