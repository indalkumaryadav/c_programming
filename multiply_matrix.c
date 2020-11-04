

// Write a Program to multiply two matrices.

#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
    int arr2[3][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
    int result[3][3];
    int i, j, k;
    int sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum = sum + arr[i][k] * arr2[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
