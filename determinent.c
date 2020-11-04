// Write a program in C to calculate determinant of a 3 x 3 matrix.

#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 15, 6}, {7, 12, 9}};

    int i, j, determinent;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            determinent = arr1[0][0] * (arr1[1][1] * arr1[2][2] - arr1[1][2] * arr1[2][1]) - arr1[0][1] * (arr1[1][0] * arr1[2][2] - arr1[1][2] * arr1[2][0]) + arr1[0][2] * (arr1[1][0] * arr1[2][1] - arr1[1][1] * arr1[2][0]);
        }
    }
    printf("Determinent of the matrix= %d", determinent);

    return 0;
}