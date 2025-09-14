#include <stdio.h>
int main(void)
{
    int n = 5; // number of rows

    for (int i = 1; i <= n; i++)
    { // outer loop for rows
        for (int j = 1; j <= i; j++)
        {                 // inner loop for columns
            putchar('*'); // print star
        }
        putchar('\n');
    }
    return 0;
}