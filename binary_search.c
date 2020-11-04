#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int first = 0;
    int last = 9;
    int mid;
    int i, j;
    int searchElement = 70;
    int present = 0;

    while (first <= last)
    {

        mid = (first + last) / 2;

        if (searchElement == arr[mid])
        {
            present++;
            break;
        }
        else if (searchElement > arr[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    if (present != 0)
    {
        printf("Present");
    }
    else
    {
        printf("Not Present");
    }

    return 0;
}