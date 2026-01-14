#include<stdio.h>
#include<conio.h>

int odd(int a[],int size)
{
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
    odd(a,n);
}