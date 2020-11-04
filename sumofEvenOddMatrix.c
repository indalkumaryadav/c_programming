// Even Odd sum In Matrix
#include <stdio.h>
int main()
{
    int arr1[3][3], even[3][3], odd[3][3];
    int evensum = 0, oddsum = 0;

    int i, j;
    printf("Enter Element in first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr1[i][j] % 2 == 0)
            {
                even[i][j] = arr1[i][j];
                evensum = evensum + arr1[i][j];
            }
            else
            {
                odd[i][j] = arr1[i][j];
                oddsum = oddsum + arr1[i][j];
            }
        }
    }

    printf("Even sum %d\n", evensum);
    printf("Odd sum %d\n", oddsum);
    return 0;
}
