/*
    Write a program to perform arithamtic operation 
    in pointer by using function .
*/
#include<stdio.h>
#include<conio.h>

int arithmatic (int ivalue1, int ivalue2)
{
    int *ptr1 = &ivalue1;
    int *ptr2 = &ivalue2;
    int icnt;

    printf("value of ivalue1 is %d\n",ivalue1);
    printf("value of ivalue2 is %d\n",ivalue2);
    printf("value of ptr1 is%lu\n",ptr1);
    printf("value of ptr1 is%lu\n",ptr2);
    printf("\n");

    printf("***** Addition *****\n");
    icnt=*ptr1 + *ptr2;
    printf("Addition =%d\n",icnt); 
    printf("=========================================\n\n");   

    printf("***** Subtraction *****\n");
    icnt=*ptr1 - *ptr2;
    printf("Subtraction =%d\n",icnt); 
    printf("=========================================\n\n"); 

    printf("***** Multiplication *****\n");
    icnt=*ptr1 * *ptr2;
    printf("Multiplication =%d\n",icnt); 
    printf("=========================================\n\n"); 

    printf("***** Division *****\n");
    icnt=*ptr1 / *ptr2;
    printf("Division =%d\n",icnt); 
    printf("=========================================\n\n"); 

    printf("***** Modulus *****\n");
    icnt=*ptr1 % *ptr2;
    printf("Modulus =%d\n",icnt); 
    printf("=========================================\n\n"); 
    
}

int main()
{
    int ino1;
    int ino2;

    printf("Enter value for ino1 =\n");
    scanf("%d",&ino1);
    printf("Enter value for ino2 =\n");
    scanf("%d",&ino2);
    printf("\n");

    int iret=arithmatic(ino1,ino2);
}