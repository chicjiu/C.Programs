//Q144: Write a function that accepts a structure as parameter and prints its members.

#include<stdio.h>
enum grades{PASS=1, FAIL=2};
struct student
{
    char name[100];
    int no;
    float marks;
    enum grades grade;
};
int main(){
    struct student s;
    printf("Enter Name: ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter Roll No: ");
    scanf("%d",&s.no);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    printf("STUDENT DETAILS:\nName: %s\nRoll NO: %d\nMarks: %.2f\nResult: ",s.name,s.no,s.marks);
    if(s.marks>=40)
    {
        s.grade=PASS;
    }
    else
    {
        s.grade=FAIL;
    }
    switch (s.grade)
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
