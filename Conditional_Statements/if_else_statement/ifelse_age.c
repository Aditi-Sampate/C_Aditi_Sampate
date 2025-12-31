/*
 Write a program of ifelse to check your age is valid for votting.
*/
#include<stdio.h>
#include<conio.h>

int display(int age)
{
    if(age>18 && age<50)
    {
      printf("your age is valid for votting");  
    }
    else
    {
        printf("your age is not valid for votting");
    }

    return 0;
}

int main()
{
    int age1;
    

    printf("Enter the your age =");
    scanf("%d",&age1);

   
    return display(age1);

}