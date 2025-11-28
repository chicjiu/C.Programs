#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b; // Start from the larger of the two

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM of %d and %d is %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
