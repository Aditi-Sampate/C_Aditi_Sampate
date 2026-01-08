/*
write a program of multiplication table of any number using while loop.
*/

#include<stdio.h>
#include<conio.h>

void display(int icnt)
{
    int ino=1;
    while(ino<=10)
    {
    
      printf("%d\n",ino*icnt);
        ino++;

    }
}
int main()
{
    int ino2=1;
    int ino1;

    printf("Enter any number for table=");
    scanf("%d",&ino1);

    display(ino1);
    return 0;

}