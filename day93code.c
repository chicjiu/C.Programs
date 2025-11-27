//Q143: Find and print the student with the highest marks.

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
    int max=0;
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
    for (int i=0;i<5;i++)
    {
        if(s[i].marks>s[max].marks)
        {
            max=i;
        }
    }
    printf("Name: %s\nRoll NO: %d\nMarks: %.2f\nResult: \n",s[max].name,s[max].no,s[max].marks);
    switch (s[max].grade)
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
