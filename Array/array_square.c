/*
    Write a program of array take array list from user and find the square of each array elements. 
*/

#include<stdio.h>
#include<conio.h>

int square(int a[],int size)
{
    int square;

    for(int i=0;i<size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
        square=a[i]*a[i];
        printf("Square=[%d]\n",square);
        printf("\n");

    }
}

int main()
{
    int n;
    printf("enter how many array elements you want =\n");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter array elements =\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    square(a,n);
}