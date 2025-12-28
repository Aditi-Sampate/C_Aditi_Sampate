//Write a program of to find the area of perimeter in function

#include<stdio.h>
#include<conio.h>

void display(int side)
{
    float perimeter;

    perimeter=side*side*side*side;
    printf("Area of square=%f",perimeter);
}

int main()
{
    int side1;

    printf("Enter the value for side=");
    scanf("%d",&side1);

    display(side1);
    return 0;

}