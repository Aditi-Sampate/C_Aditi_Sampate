/* WAP of check number is even or odd */

#include<stdio.h>
#include<conio.h>

void check_num(int ivalue)
{
    if(ivalue<=100 && ivalue>=1)
    {
        if(ivalue %2==0)
        {
            printf("This is even number ");
        }
        else
        {
            printf("This is odd number ");
        }
    }
    else
    {
        if((ivalue%2)!=0)
        {
            printf("Number is odd ");
        }
        else
        {
            printf("Number is even");    
        }
    }
}

int main()
{
    int ivalue1;

    printf("Enter any number =");
    scanf("%d",&ivalue1);

    check_num(ivalue1);
    return 0;
    
}