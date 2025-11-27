//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include<stdio.h>
enum role{ADMIN=1, USER=2, GUEST=3};
int main(){
    int choice;
    printf("1. ADMIN\n2.USER\n3.GUEST\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case ADMIN:
            printf("Welcome Admin, You have full Access.");
            break;
        case USER:
            printf("Welcome User, You have Limited Access");
            break;
        case GUEST:
            printf("Welcome Guest, You only have browsing Access.");
            break;
        default:
            printf("Invalid.");
            break;
    }
}
