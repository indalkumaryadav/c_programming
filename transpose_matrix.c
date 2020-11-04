#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
    int t[3][3];

    int row, col, temp;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {

            printf("%d", arr[row][col]);
        }
        printf("\n");
    }
    printf("Transpose of matrix\n");

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {

            t[row][col] = arr[col][row];
            printf("%d", t[row][col]);
        }
        printf("\n");
    }

    return 0;
}