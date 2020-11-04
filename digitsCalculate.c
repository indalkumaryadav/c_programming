//Write a program which takes an integer from the user and calculates the number of digits.

#include <stdio.h>
int CalNumberDigits(int num)
{
    int i, cout = 0;
    while (num != 0)
    {
        num = num / 10;
        cout++;
    }

    printf("%d", cout);
}
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);

    CalNumberDigits(num);

    return 0;
}