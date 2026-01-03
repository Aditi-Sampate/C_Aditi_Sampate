/*
  Write a program of ifelse ladder to check the mark list of the student
  as year wise give the year from user.
*/

#include<stdio.h>
#include<conio.h>

void display(int year)
{
    if(year==2001)
    {
        printf("prachi  80%     BCA Fy\n");
        printf("komal   81%     BCA FY\n");
        printf("Aditi   79%     BCA FY\n");
    
    }

    else if (year==2002)
    {
        printf("Anuja     90%      BCA Fy \n");
        printf("Sakshi    71%      BCA FY\n");
        printf("Vaibhavi  79%      BCA FY\n");
    
    }

    else if (year==2003)
    {
        printf("Sharayu   60%       BCA Fy\n");
        printf("Shreya    67%       BCA FY\n");
        printf("Shravni   79%       BCA FY\n");
    
    }

    else if (year==2004)
    {
        printf("Roshni  60%     BCA Fy\n");
        printf("Astha   71%     BCA FY\n");
        printf("Gatha   79%     BCA FY\n");
    
    }

    else
    {
        printf("this year's result are not available");
    }
}

int main()
{
    int y;

    printf("Enter the year for check the marklist=");
    scanf("%d",&y);

    display(y);
    return 0;
}