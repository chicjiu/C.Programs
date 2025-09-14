#include <stdio.h>

int main()
{
    int num, digit, product = 1;
    int hasOdd = 0; // flag to check if any odd digit exists

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 == 1)
        { // check if odd
            product *= digit;
            hasOdd = 1; // at least one odd digit found
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found, product = 0\n");

    return 0;
}
