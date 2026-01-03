/*
    Write a program of check triangle is equalilatral,isolated,scalene depend upon the given side.
*/

#include<stdio.h>
#include<conio.h>

void triangle(int side1,int side2,int side3)
{
    if(side1==side2 && side2==side3)
    {
        printf("Equalilatral Triangle");
    }
    else if (side1==side2 && side2!=side3)
    {
        printf("Isolated Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
}

int main()
{
    int side1;
    int side2;
    int side3;

    printf("Enter the length for side1=");
    scanf("%d",&side1);

    printf("Enter the length for side2=");
    scanf("%d",&side2);

    printf("Enter the length for side3=");
    scanf("%d",&side3);

    triangle(side1,side2,side3);
    return 0;

}