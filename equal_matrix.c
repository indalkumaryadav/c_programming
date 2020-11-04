// Write a program in C to accept two matrices and check whether they are equal.

#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{11, 11, 11}, {44, 45, 16}, {17, 18, 19}};

    int i, j, equal;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                equal = 1;
            }
            else
            {
                equal = 0;
            }
        }
    }
    if (equal != 0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}