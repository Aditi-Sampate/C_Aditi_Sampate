/*
    Write a program to print the number of string length function . 
*/

#include <stdio.h>
#include <string.h>


int Length(char str[]) 
{
    return strlen(str);
}

void copy(char str1[], char str2[])
{
    strcpy(str1, str2);
}

int main()
{
    char name[20];
    char surname[20];

    printf("Enter your name: \n");
    scanf("%s", name);

    printf("Enter your surname:\n");
    scanf("%s", surname);  

    int length_string = Length(name);

    
    copy(name, surname);

    printf("Length of string: %d\n", length_string);
    printf("name: %s\n", name );  
    printf("surname: %s\n", surname );

    return 0;
}



