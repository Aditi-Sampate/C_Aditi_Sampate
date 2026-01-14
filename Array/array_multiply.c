/*
  Write a program of array take elements from user to print the
  array list and perform subtraction .

*/

#include<stdio.h>
#include<conio.h>

int mult(int a[],int size)
{
    int mult=1;

    for(int i=0;i<size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
        mult=mult*a[i];
    }
    printf("multipication=[%d]\n",mult);
}

int main()
{
    int n;

    printf("Enter how many elements you want =\n ");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter array element =\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",& a[i]);
    }
    mult(a,n);
}