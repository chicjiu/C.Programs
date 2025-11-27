#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Error! Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        ch = tolower(ch);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
