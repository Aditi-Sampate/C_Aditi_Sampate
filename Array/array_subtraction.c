/*
  Write a program of array take elements from user to print the
  array list and perform subtraction .
*/

#include<stdio.h>
#include<conio.h>

void subtraction(int arr[],int size)
{
    int sub=0;

    for(int i=0;i<size;i++)
    {
        printf("[%d]=[%d]\n",i,arr[i]);
        sub=sub-arr[i];
    }
    printf("subtraction=[%d]\n",sub);
}

int main()
{
    int n;
    printf("Enter how many elements you have =");
    scanf("%d",&n);

    int a[n];
    int i;
    
    printf("enter array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    subtraction(a,n);

}

