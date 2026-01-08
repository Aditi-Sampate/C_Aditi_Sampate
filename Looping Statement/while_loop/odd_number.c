/*
write a program odd number give the value from user.
*/

#include<stdio.h>
#include<conio.h>

void odd(int a,int b)
{
    while(a<=b)
    {
        if(a%2!=0)
        {
            printf("%d\n",a);
        }
        a++;
    }
}

int main()
{
    int p;
    int q;

    printf("Enter the first number=");
    scanf("%d",&p);
    printf("Enter the last number=");
    scanf("%d",&q);

    odd(p,q);
    return 0;


}