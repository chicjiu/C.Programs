#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[100];
    char text[200];

    // Get filename from user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("Error: Cannot open file %s\n", filename);
        exit(1);
    }

    // Clear input buffer before using fgets
    getchar();

    // Get line of text from user
    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to file
    fputs(text, fp);

    printf("\nText successfully appended to file '%s'\n", filename);

    fclose(fp);
    return 0;
}
