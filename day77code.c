#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for toupper()

int main()
{
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL)
    {
        printf("Error: Cannot open input.txt for reading.\n");
        exit(1);
    }

    // Open output file in write mode
    fout = fopen("output.txt", "w");
    if (fout == NULL)
    {
        printf("Error: Cannot open output.txt for writing.\n");
        fclose(fin);
        exit(1);
    }

    // Read each character, convert to uppercase, and write to output file
    while ((ch = fgetc(fin)) != EOF)
    {
        fputc(toupper(ch), fout);
    }

    printf("Text successfully converted to uppercase and written to output.txt\n");

    // Close both files
    fclose(fin);
    fclose(fout);

    return 0;
}
