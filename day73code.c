#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char filename[50], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: Cannot open file %s\n", filename);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        // Check for word boundaries
        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("\n--- File Statistics ---\n");
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
