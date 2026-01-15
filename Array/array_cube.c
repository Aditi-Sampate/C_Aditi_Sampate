/*
    Write a program of array take array list from user
     and find the cube of each array elements. 
*/

#include<stdio.h>
#include<conio.h>

int cube(int a[],int size)
{
    int cube;

    for(int i=0;i<size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
        cube=a[i]*a[i]*a[i];
        printf("Cube =[%d]\n",cube);
        printf("\n");
    }   
}

int main()
{
    int n;
    printf("Enter how many array element you want =\n ");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter array element =\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    cube(a,n);
}