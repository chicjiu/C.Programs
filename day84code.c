//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

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
