//Write a program of given number is positive ,negative and zero.

#include<stdio.h>
#include<conio.h>

void positive(int ino)
{
    switch(ino>0)
    {
        case 1:
        printf("This is positive number",ino);
        break;

        case 0:
        switch(ino<0)
        {
            case 1:
            printf("This is negative number",ino);
            break;

            case 0:
            printf("Number is equal");
            break;
        }
    }
}

int main()
{
    int ino1;

    printf("Enter the number =");
    scanf("%d",&ino1);

    positive(ino1);
    return 0;
}