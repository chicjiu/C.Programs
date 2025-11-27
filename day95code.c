//Q145: Return a structure containing top student's details from a function.

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
struct student top_student(struct student s[],int n)
{
    int max=0;
    for (int i=1;i<n;i++)
    {
        if(s[i].marks>s[max].marks)
        {
            max=i;
        }
    }
    return s[max];
}
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
    struct student top=top_student(s,5);
    printf("Name: %s\nRoll NO: %d\nMarks: %.2f\nResult: \n",top.name,top.no,top.marks);
    switch (top.grade)
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
