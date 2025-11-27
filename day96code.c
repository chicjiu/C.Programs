//Q146: Create Employee structure with nested Date structure for joining date and print details.

#include<stdio.h>
#include<string.h>
struct date
{
    int day;
    int month;
    int year;
};
enum department{HR=1,Sales=2,Finance=3,IT=4};
struct employee
{
    char name[100];
    int id;
    float salary;
    enum department dept;
    struct date joining;
};
int main(){
    struct employee e;
    printf("Enter Name: ");
    fgets(e.name,sizeof(e.name),stdin);
    printf("Enter ID: ");
    scanf("%d",&e.id);
    printf("Enter Salary: ");
    scanf("%f",&e.salary);
    printf("Enter Department: \n1.HR\n2.Sales\n3.Finance\n4.IT\n");
    scanf("%d",&e.dept);
    printf("Enter Joining date(dd mm yyyy): ");
    scanf("%d %d %d",&e.joining.day,&e.joining.month,&e.joining.year);
    printf("EMPLOYEE DETAILS:\nName: %s\nID: %d\nSalary: %.2f\nDepartment: \n",e.name,e.id,e.salary);
    switch (e.dept)
    {
        case HR:
            printf("HR");
            break;
        case Sales:
            printf("Sales");
            break;
        case Finance:
            printf("Finance");
            break;
        case IT:
            printf("IT");
            break;
        default:
            printf("Invalid.");
            break;
    }
    printf("Joining date: %d-%d-%d\n",e.joining.day,e.joining.month,e.joining.year);
}
