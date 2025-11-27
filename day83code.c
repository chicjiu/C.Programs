//Q133: Create an enum for months and print how many days each month has.

#include<stdio.h>
enum months{January=1,February=2,March=3,April=4,May=5,June=6,July=7,August=8,September=9,October=10,November=11,December=12};
int main(){
    enum months month;
    printf("Enter Month Number: ");
    scanf("%d",&month);
    switch (month)
    {
        case January:
            printf("January has 31 Days");
            break;
        case February:
            printf("February has 28 or 29 Days");
            break;
        case March:
            printf("March has 31 Days");
            break;
        case April:
            printf("April has 30 Days");
            break;
        case May:
            printf("May has 31 Days");
            break;
        case June:
            printf("June has 30 Days");
            break;
        case July:
            printf("July has 31 Days");
            break;
        case August:
            printf("August has 31 Days");
            break;
        case September:
            printf("September has 30 Days");
            break;
        case October:
            printf("October has 31 Days");
            break;
        case November:
            printf("November has 30 Days");
            break;
        case December:
            printf("December has 31 Days");
            break;
        default:
            printf("Invalid.");
            break;
    }
}
