//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include<stdio.h>
enum operations{ADD=1, SUB=2, MULTIPLY=3};
int main(){
    int a,b,ans,choice;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    printf("1. Add\n2.Subtract\n3.Multiply\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case ADD:
            ans=a+b;
            printf("Add: %d",ans);
            break;
        case SUB:
            ans=a-b;
            printf("Sub: %d",ans);
            break;
        case MULTIPLY:
            ans=a*b;
            printf("Multiply: %d",ans);
            break;
        default:
            printf("Invalid.");
            break;
    }
}
