/*
  Write a program of ifelse ladder enter marks and find grade take marks from user.
*/
#include<stdio.h>
#include<conio.h>

void display(int mark)
{
    if(mark>90 && mark<100)
    {
        printf("you got 'A'grade");
    }
    else if(mark>80 && mark<90)
    {
        printf("you got 'B'grade");

    }
    else if (mark>70 && mark<80)
    {
        printf("you got 'C'grade");
    }
    else if (mark>60 && mark<70)
    {
        printf("you got 'D'grade");
    }
    else if(mark>50 && mark<60)
    {
        printf("you got 'E'grade");
    }
    else if (mark>35 && mark<50)
    {
        printf("you got 'E+'grade");
    }
    else
    {
        printf("you are fail");
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
