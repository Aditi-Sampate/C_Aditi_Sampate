/*
  Write a program of array take elements from user to print the division. 
*/

#include<stdio.h>
#include<conio.h>

int div(int a[],int size)
{
    int div=1;

    for(int i=0;i<size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
        div=div/a[i];
    }
    printf("Division=[%d]\n",div);
}

int main()
{
    int n;
    printf("Enter how many elements you want =\n");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter array elements =\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    div(a,n);
}