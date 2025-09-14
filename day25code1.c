#include <stdio.h>
int main(void)
{
    int start, num;

    for (start = 5; start >= 1; start--)
    {
        for (num = start; num <= 5; num++)
        {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}