#include <stdio.h>

int main()
{
    double num1, num2;
    double sum, diff, prod, quot;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    if (num2 != 0)
    {
        quot = num1 / num2;
        printf("Quotient = %.2lf\n", quot);
    }
    else
    {
        printf("Quotient = Undefined (division by zero)\n");
    }

    printf("Sum = %.2lf\n", sum);
    printf("Difference = %.2lf\n", diff);
    printf("Product = %.2lf\n", prod);

    return 0;
}
