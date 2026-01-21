/*
    Write a program to print the concatination of string function. 
*/

#include<stdio.h>
#include<string.h>

void concatination(char str1[],char str2[])
{
    strcat(str1,str2);
}

int main()
{
    char collegename[100];
    char address[60];

    printf("Enter the name of college =\n");
    scanf("%s",collegename);

    printf("Enter the address =\n");
    scanf("%s",address);

    concatination(collegename,address);

    printf("College Name =%s\n",collegename);
    printf("Adderss =%s\n",address);

    
    return 0;
}