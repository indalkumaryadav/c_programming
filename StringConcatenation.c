// Write a program to concatenate two strings entered by user.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter first String \n");
    gets(str1);
    printf("Enter Second String \n");
    gets(str2);

    strcat(str1, str2);
    printf("Concatination of two string\n");
    puts(str1);
    return 0;
}