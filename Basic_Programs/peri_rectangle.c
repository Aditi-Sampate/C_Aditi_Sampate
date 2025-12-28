//Write a program of to find the perimeter of rectangle in function.

#include<stdio.h>
#include<conio.h>

void display(int length,int bredth)
{
    float perimeter ;

 perimeter=2*(length+bredth);
printf("Perimeter of rectangle=%f",perimeter);
}

int main()
{
    int l;
    int b;

    printf("Enter the value of length=");
    scanf("%d",&l);

    printf("Enter the value of base=");
    scanf("%d",&b);

    display(l,b);
    return 0;
    
}

