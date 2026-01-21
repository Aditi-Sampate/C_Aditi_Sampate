/*
    Write a program to print the reverse of string function. 
*/

#include<stdio.h>
#include<string.h>

void reverse(char str1[])
{
    strrev(str1);
}

int main()
{
    char name[100];
   
    printf("Enter the name =\n");
    scanf("%s",name);


    reverse(name);

    printf("Name =%s\n",name);
       
    return 0;
}