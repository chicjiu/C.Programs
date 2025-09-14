#include <stdio.h>
int main(void)
{
    int n; // number of rows
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    { // for each row
        for (int j = 1; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n'); // new line after each row
    }
    return 0;
}