#include <stdio.h>
int main()
{
    int i, n;
    double sum = 0.0, term;

    printf("Enter the  number of terms:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        term = (2.0 * i) / (4.0 * i - 1.0);
        sum += term;
    }
    printf("sum of the series up to %d terms = %.4f\n", n, sum);
    return 0;
}