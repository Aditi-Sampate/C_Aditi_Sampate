/*
  Write a program of array to print the addition of the number.
*/

#include<stdio.h>
#include<stdio.h>

int addition(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
      printf("[%d]=[%d]\n",i,arr[i]);
      sum=sum+arr[i];
    }
     printf("addition=[%d]\n",sum);

}


int main()
{
    int n;

    printf("enter how many element you have =\n");
    scanf("%d",&n);

    int a[n];
    int i;
    
    printf("enter array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    addition(a,n);

}
    