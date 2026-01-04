//Write a program to check maximum number in the given number from user.

#include<stdio.h>
#include<conio.h>

void maximum(int ino1,int ino2)
{
    switch(ino1>ino2)
    {
        case 1:                            // here 1 is true ...this is a boolean datatype
        printf("The number is maximum",ino1);
        break;

        case 0:                             // here 0 is false ...this is a boolean datatype
        switch(ino2>ino1)
        {
           case 1:
            printf("The number is maximum",ino2);
            break;

            case 0:
            printf("number is equal");
            break;
        }
       
    }

}

int main()
{
    int ino;
    int icnt;

    printf("Enter the first number=");
    scanf("%d",&ino);

    printf("Enter the second number=");
    scanf("%d",&icnt);

    maximum(ino,icnt);
    return 0;

}