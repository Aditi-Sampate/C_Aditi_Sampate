/*
    Write a program of array to create a reverse of array element .
*/
#include <stdio.h>

void reverse_array(int arr[], int size)
{
    int Array[size];
    for (int i = 0; i < size; i++)
    {
        Array[i] = arr[size - i - 1];
    }

    
    printf("Reversed Array: \n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d \n", Array[i]);
    }
}

int main()
{
    
    int n;
    printf("enter how many array element you want to enter =\n");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter array element =\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse_array(arr,n);

    return 0;
}