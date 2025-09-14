#include <stdio.h>
int main()
{
    int num, originalnum, digit, factorial = 1, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalnum = num;

    while (num > 0)
    {
        digit = num % 10;

        factorial = 1;
        for (i = 1; i <= digit; i++)
        {
            factorial *= i;
        }

        sum += factorial;
        num /= 10;
    }
    if (sum == originalnum)
    {
        printf("%d is a strong number.\n", originalnum);
    }
    else
    {
        printf("%d is not a strong number.\n", originalnum);
    }
    return 0;
}
