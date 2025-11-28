#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Make number positive if it's negative
    if (number < 0)
    {
        number = -number;
    }

    while (number != 0)
    {
        digit = number % 10; // Get last digit
        sum += digit;        // Add to sum
        number /= 10;        // Remove last digit
    }

    printf("Sum of digits is %d\n", sum);

    return 0;
}
