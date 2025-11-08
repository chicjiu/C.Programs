#include <stdio.h>

int main()
{
    FILE *file;
    char line[200];

    // Open the existing file in read mode
    file = fopen("info.txt", "r");

    if (file == NULL)
    {
        printf("Error! Could not open the file.\n");
        return 1;
    }

    printf("Contents of the file:\n\n");

    // Read each line until EOF
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line); // print the line to console
    }

    fclose(file); // close the file
    printf("\n\n✅ Finished reading file.\n");

    return 0;
}
