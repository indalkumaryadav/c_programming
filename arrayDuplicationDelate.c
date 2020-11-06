// Write a C Program to Delete duplicate elements from an array.
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 1, 4, 5, 6, 7, 8, 9, 1};
    int i, j, k, n = 10;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}