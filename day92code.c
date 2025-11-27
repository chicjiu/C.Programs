//Q142: Store details of 5 students in an array of structures and print all.

#include<stdio.h>
#include<string.h>
enum grades{PASS=1, FAIL=2};
struct student
{
    char name[100];
    int no;
    float marks;
    enum grades grade;
};
int main(){
    struct student s[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter %d Student Details: \n",i+1);
        printf("Enter Name: ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        printf("Enter Roll No: ");
        scanf("%d",&s[i].no);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        getchar();
        if(s[i].marks>=40)
        {
            s[i].grade=PASS;
        }
        else
        {
            s[i].grade=FAIL;
        }
    }
    printf("STUDENT DETAILS:\n");
    for (int i=0;i<5;i++)
    {
        printf("Name: %s\nRoll NO: %d\nMarks: %.2f\nResult: \n",s[i].name,s[i].no,s[i].marks);
        switch (s[i].grade)
        {
            case PASS:
                printf("PASS");
                break;
            case FAIL:
                printf("FAIL");
                break;
            default:
                printf("Invalid.");
                break;
        }
    }
}
