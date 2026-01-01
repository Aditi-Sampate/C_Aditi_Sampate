/* WAP find the maximum number from three numbers by using nested if else */

#include<stdio.h>
#include<conio.h>

void max(int num1,int num2,int num3)
{
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf(" num1 is maximum");
        }
        else
        {
            printf("num3 is maximun ");
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("num2 is maximum ");
        }
        else
        {
            printf("num3 is maximum");    
        }
    }
}

int main()
{
    int ino1;
    int ino2;
    int ino3;

    printf("Enter any number for ino1 =");
    scanf("%d",&ino1);
    printf("Enter any number for ino2 =");
    scanf("%d",&ino2);
    printf("Enter any number for ino3 =");
    scanf("%d",&ino3);

    max(ino1,ino2,ino3);
    return 0;
    
}