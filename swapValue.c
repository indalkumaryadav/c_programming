// Write a C program using the concept of functions to swap the values of variables without using third variable.

#include <stdio.h>

int swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}

int main()
{
    int a = 10, b = 15;
    swap(a, b);

    return 0;
}
