#include<stdio.h>
#include<conio.h>

int addition(int arr[],int size)
{

    int sum=0;
    int *ptr[size];

    for(int i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
        printf("[%d]=[%d]\n",i,*ptr[i]);
        sum=sum + *ptr[i];

    }
    printf("Addition =[%d]\n",sum);
}

int subtraction(int arr[],int size)
{

    int sub=0;
    int *ptr[size];

    for(int i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
        printf("[%d]=[%d]\n",i,*ptr[i]);
        sub=sub - *ptr[i];

    }
    printf("Subtraction =[%d]\n",sub);
}

int Multiply(int arr[],int size)
{

    int mult=1;
    int *ptr[size];

    for(int i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
        printf("[%d]=[%d]\n",i,*ptr[i]);
        mult=mult * *ptr[i];

    }
    printf("Multiplication =[%d]\n",mult);
}

int division(int arr[],int size)
{

    int div=1;
    int *ptr[size];

    for(int i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
        printf("[%d]=[%d]\n",i,*ptr[i]);
        div=div / *ptr[i];

    }
    printf("Division =[%d]\n",div);
}

int modulus(int arr[],int size)
{

    int model=1;
    int *ptr[size];

    for(int i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
        printf("[%d]=[%d]\n",i,*ptr[i]);
        model=model % *ptr[i];

    }
    printf("Modulus =[%d]\n",model);
}
int main()
{
    int n;

    printf("enter how many array elements you have =\n");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter array element =\n ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    addition(a,n);
    subtraction(a,n);
    Multiply(a,n);
    division(a,n);
    modulus(a,n);
}



