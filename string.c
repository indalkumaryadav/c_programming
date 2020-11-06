// write a program for string including all the string function string lengt,copy,compare,reverse,uppercase, lowercase

#include <stdio.h>
#include <string.h>
int main()
{
    char string[10] = "Indal";
    char string2[10] = "Indal";
    char copy[10];
    printf("Length of the string %d\n", strlen(string));
    strcpy(copy, string);
    printf("%s\n", copy);
    strrev(string);
    strupr(string);
    printf("Reverse of the string %s\n", string);

    if (strcmpi(string, copy) != 0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}
