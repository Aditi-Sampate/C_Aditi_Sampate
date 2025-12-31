/*
 Write a program of ifelse enter the marks and check you are pass or not.
*/

#include<stdio.h>
#include<conio.h>

void display(int mark)
{
    if(mark>35 &&mark<100)
    {
        
        printf("Your are pass");
        
    }
    else
    {
        printf("your are Fail");
    }
}

int main()
{
    int m;

    printf("Enter the marks=");
    scanf("%d",&m);

    display(m);
    return 0;

}
       