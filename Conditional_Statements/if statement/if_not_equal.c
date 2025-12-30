#include<stdio.h>
#include<conio.h>

    void display(int a)
    {
        if(a!=500)
        {
            printf("A is not equal to 500",a);
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

