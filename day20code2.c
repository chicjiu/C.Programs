#include <stdio.h>

int main()
{
    long long bin, complement = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    while (bin > 0)
    {
        digit = bin % 10; // get last digit (0 or 1)

        // Flip the bit
        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        // Build the complement number
        complement = digit * place + complement;

        place *= 10;
        bin /= 10; // remove last digit
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}
