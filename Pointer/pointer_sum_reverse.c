/*
    Write a program of sum and reverse the number 
    in pointer by using function .
*/

#include<stdio.h>
#include<conio.h>

int sum_rev(int ino1,int ino2,int ino3, int n,int sum)
{
    int rev;

    int *ptr1 = &ino1;
    int *ptr2 = &ino2;
    int *ptr3 = &ino3;
    int *ptr4 = &sum;

    *ptr1=n%10;
    n=n/10;

    *ptr2=n%10;
    n=n/10;

    *ptr3=n%10;
    n=n/10;

    sum=*ptr1+*ptr2+*ptr3;
    printf("Sum =%d\n",sum);

    printf("______________________________________________________________________");

    rev=(*ptr1 * 100)+(*ptr2 * 10)+(*ptr3 * 1);
    printf("Reverse = %d\n",rev);


}

int main()
{
    int ivalue1;
    int ivalue2;
    int ivalue3;
    int n;
    int sum;

    printf("Enter the value for number =\n");
    scanf("%d",&n);
    printf("\n");

    sum_rev(ivalue1,ivalue2,ivalue3,n,sum);
}