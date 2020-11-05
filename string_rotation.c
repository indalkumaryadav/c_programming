#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "Universe";
    int n = strlen(str);
    int i, j;

    for (i = 0; i < n; i++)
    {
        str[n] = str[0];
        for (j = 0; j < n; j++)
        {
            str[j] = str[j + 1];
        }
        str[n] = '\0';
        printf("%s\n", str);
    }

    return 0;
}