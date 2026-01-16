/*
    Write a program to perform swapping of two and three 
    variables in pointer using function . 
*/

#include<stdio.h>
#include<conio.h>

int swap(int ino1,int ino2)
{
    int *ptr1 = &ino1;
    int *ptr2 = &ino2;

    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

    printf("Swapping value of two variables\n");
    printf("Swapping value of ino1 =%d\n",*ptr1);
    printf("Swapping value of ino2 =%d\n",*ptr2);
    printf("\n");

}
int swap3(int ino1,int ino2,int ino3)
{
    int *ptr1 = &ino1;
    int *ptr2 = &ino2;
    int *ptr3 = &ino3;
    
    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
    printf("swapping value of three variables \n");
    printf("swapping value of ino1 =%d\n",*ptr1);
    printf("Swapping value of ino2 =%d\n",*ptr2);

}

int main()
{
    int ivalue1;
    int ivalue2;
    int ivalue3;
    

    printf("Enter the value for ivalue1 =\n");
    scanf("%d",&ivalue1);

    printf("Enter the value for ivalue2 =\n");
    scanf("%d",&ivalue2);
    printf("\n");

    swap(ivalue1,ivalue2);
    swap3(ivalue1,ivalue2,ivalue3);

}