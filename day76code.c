#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        exit(1);
    }

    // If file exists, display its content
    printf("\n--- Contents of '%s' ---\n", filename);
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
