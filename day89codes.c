//Q139: Show that enums store integers by printing assigned values.

#include<stdio.h>
enum status{SUCCESS=1, FAILURE=2, TIMEOUT=3};
int main(){
    enum status result;
    printf("Enter Status: ");
    scanf("%d",&result);
    switch (result)
    {
        case SUCCESS:
            printf("Successsful");
            break;
        case FAILURE:
            printf("Failed");
            break;
        case TIMEOUT:
            printf("Timeout");
            break;
        default:
            printf("Invalid.");
            break;
    }
}
