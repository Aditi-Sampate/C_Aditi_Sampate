#include<stdio.h>
#include<conio.h>

void display(int a)
{
    if(a>=400)
    {
        printf("A is greater than or equal to 500 ",a);
        
    }
}

    int main()
    {
        int ino;

        printf("Enter the  any number=");
        scanf("%d",&ino);

        display(ino);
        return 0;

    }

    

