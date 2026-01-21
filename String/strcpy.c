/*
    Write a program to print the string copy function . 
*/
#include<stdio.h>
#include<string.h>

void copy(char str1[], char str2[])
{
    strcpy(str2, str1);
}

int main()
{
    char name[20];
    char surname[20];

    printf("Enter your name: \n");
    scanf("%s", name);

    printf("Enter your surname:\n");
    scanf("%s", surname);  

    
    copy(name, surname);

    printf("name: %s\n", name );  
    printf("surname: %s\n", surname );

    return 0;
}

