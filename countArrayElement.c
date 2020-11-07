// Write a program to count number of elements in an array using sizeof() operator.

#include <stdio.h>
int main()
{

    int n;
    int i;
    printf("Enter Size of an array\n");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d = ", i);
        scanf("%d", &arr[i]);
    }

    int countArray;

    printf("%d", (sizeof(arr[0]) * n) / 4);

    return 0;
}