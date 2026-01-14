/*
    Write a program of array to print the even and odd array element 
    give the array elements from user.
*/

#include<stdio.h>
#include<conio.h>

int even_odd(int a[],int size)
{
    int counteven=0;

    printf("Even Number =\n");
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
            counteven++;

        }
    }
    printf("number of even elements =%d\n",counteven);
    printf("\n");
    
     int countodd=0;
    
    printf("Odd Number =\n");
    for(int i=0;i<size;i++)
    {
        
        if(a[i]%2!=0)
        {
            printf("%d\n",a[i]);
            countodd++;
        }
    
    }
    printf("number of odd elements =%d\n",countodd);

}

int main()
{
    int n;

    printf("Enter how many array element you want =\n");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter array element =\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    even_odd(a,n);

}