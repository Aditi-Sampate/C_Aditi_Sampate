/*
    Write a program to perform the area of circle ,triangle ,rectangle ,
    square in pointer using function . 
*/

#include<stdio.h>
#include<conio.h>

int area(int ivalue)
{
    float area;
    int *ptr1 =&ivalue;

    area=3.14* *ptr1 * *ptr1;
    printf("Area of circle =%f\n",area);
}
int triangle(int ivalue1,int ivalue2)
{
    float area;
    int *ptr2 =&ivalue1;
    int *ptr3 =&ivalue2;

    area=ivalue1* ivalue2/2;
    printf("Area of Triangle =%f\n",area);

}

int rectangle(int ino,int icnt)
{
    float area;
    int *ptr1=&ino;
    int *ptr2=&icnt;

    area=*ptr1 * *ptr2;
    printf("Area of Rectangle =%f\n",area);


}


int main()
{
    int radius;
    
    printf("Enter the value for radius =\n");
    scanf("%d",&radius);
    area(radius);

    
    int base;
    int height;

    printf("Enter the value for base =\n");
    scanf("%d",&base);

    printf("Enter the value for height =\n");
    scanf("%d",&height);
    triangle(base,height);

    int length;
    int bredth;

    printf("Enter the value of length =\n");
    scanf("%d",&length);

    printf("Enter the value of bredth =\n");
    scanf("%d",&bredth);
    rectangle(length,bredth);

}