#include <stdio.h>
int main(void)
{
    int n; // number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { // loop for each row
        for (int j = 1; j <= i; j++)
        {                    // loop for each column in a row
            printf("%d", j); // to print column number
        }
        printf("\n"); // to move to the next line after each row
    }
    return 0;
}