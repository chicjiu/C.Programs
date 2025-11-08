#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    char ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL)
    {
        printf("Error: Cannot open source file %s\n", sourceFile);
        exit(1);
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL)
    {
        printf("Error: Cannot create destination file %s\n", destFile);
        fclose(src);
        exit(1);
    }

    // Copy contents character by character
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("\nFile copied successfully from %s to %s\n", sourceFile, destFile);

    // Close both files
    fclose(src);
    fclose(dest);

    return 0;
}
