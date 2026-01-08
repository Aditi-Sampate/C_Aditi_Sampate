/* Write a program of print alphabet  .*/

#include<stdio.h>
#include<conio.h>

void alphabet(char ino,char icnt)
{
    while(ino<=icnt)
    {
        printf("%c\t",ino);
        ino++;
    }

}
int main()
{
    char alpha;
    char last_alpha;

    
    alphabet(alpha='a',last_alpha='z');
    return 0;
}