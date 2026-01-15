/*
    Write a program of array take element and print the array element 
    and print maximum number . 
*/

#include<stdio.h>
#include<conio.h>

int max(int a[],int size)
{
    int max=a[0];
    
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
       
    }
     printf("Maximum number is =[%d]",max);
}

int main()
{

    int n;
    printf("Enter how many elemets you want =\n");
    scanf("%d",&n);

    int arr[n];
    int i;

    printf("Enter array element =\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max(arr,n);
}