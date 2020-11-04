#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
    int arr2[3][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
    int sum[3][3];
    int row, col;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            sum[row][col] = arr1[row][col] + arr2[row][col];
            printf("%d\n", sum[row][col]);
        }
        printf("\n");
    }

    return 0;
}