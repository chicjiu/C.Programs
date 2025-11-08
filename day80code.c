#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;
    FILE *fp;
    int n, i;

    fp = fopen("students.txt", "w"); // open file in write mode
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Write student records to file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
    printf("\nRecords successfully saved to file 'students.txt'\n");

    // Read and display records
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF)
    {
        printf("Roll No: %d\n", s.roll);
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(fp);
    return 0;
}
