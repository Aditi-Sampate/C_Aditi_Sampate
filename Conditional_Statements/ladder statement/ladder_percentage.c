/*
  Write a program of give the five subject marks and make total and calculate the percentage 
  and print the grade depending upon the percentage.
*/

#include<stdio.h>
#include<conio.h>

int display(int math,int science,int marathi,int sanskrit,int english)
{
   int total_mark=math+science+marathi+sanskrit+english;
    printf("your total marks is =%d\n",total_mark);

    int percentage=total_mark*100/500;
    printf("your percentage is =%d\n",percentage);

    if(percentage>90 && percentage<=100)
    {
        printf("you got a 'A'grade");
    }
    else if(percentage>80 && percentage<=90)
    {
        printf("you got a 'A+'grade");
    }
    else if(percentage>70 && percentage<=80)
    {
        printf("you got a 'B'grade");

    }
     else if(percentage>60 && percentage<=70)
    {
        printf("you got a 'B+'grade");

    }
     else if(percentage>50 && percentage<=60)
    {
        printf("you got a 'C'grade");

    }
     else if(percentage>=35 && percentage<=50)
    {
        printf("you got a 'C+'grade");

    }
    else
    {
        printf("you are fail");
    }
    return 0;
}

int main()
{
    int maths;
    int sci;
    int marathi1;
    int san;
    int eng;
    
    printf("Enter the maths subject marks=");
    scanf("%d",&maths);

    printf("Enter the science subject marks=");
    scanf("%d",&sci);
    
    printf("Enter the marathi1 subject marks=");
    scanf("%d",&marathi1);
    
    printf("Enter the sanskrit subject marks=");
    scanf("%d",&san);
    
    printf("Enter the eng subject marks=");
    scanf("%d",&eng);
    
    return  display(maths,sci,marathi1,san,eng);
}