//Write a program of to find the perimeter of rectangle in function.

#include<stdio.h>
#include<conio.h>

void display(int radius)
{
    float perimeter;

    perimeter=2*3.14*radius;
printf("Perimeter of circle=%f",perimeter);

}

int main()
{
    int r;

    printf("Enter the value for radius=");
    scanf("%d",&r);

    display(r);
    return 0;
}