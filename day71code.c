#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int age;

    // Open the file in write mode
    file = fopen("info.txt", "w");

    if (file == NULL)
    {
        printf("Error! Could not create file.\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // read name with spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to the file
    fprintf(file, "Name: %sAge: %d\n", name, age);

    fclose(file); // close file after writing

    printf("✅ Data successfully saved to info.txt\n");

    return 0;
}
