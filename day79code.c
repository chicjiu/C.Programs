#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    float avg;

    fp = fopen("numbers.txt", "r"); // open file in read mode
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    // Read integers until end of file
    while (fscanf(fp, "%d", &num) != EOF)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("File is empty or no numbers found.\n");
    }
    else
    {
        avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
