//Q140: Define a struct with enum Gender and print person's gender.

#include<stdio.h>
enum genders{MALE=1, FEMALE=2, OTHER=3};
struct person
{
    char name[100];
    enum genders gender;
};
int main(){
    struct person p;
    printf("Enter first name: ");
    scanf("%s",&p.name);
    printf("Enter The following: \n1.MALE\n2.FEMALE\n3.OTHER");
    printf("Enter gender: ");
    scanf("%d",&p.gender);
    switch (p.gender)
    {
        case MALE:
            printf("MALE");
            break;
        case FEMALE:
            printf("FEMALE");
            break;
        case OTHER:
            printf("OTHER");
            break;
        default:
            printf("Invalid.");
            break;
    }
}
