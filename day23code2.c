#include <stdio.h>
int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        n = 5;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}