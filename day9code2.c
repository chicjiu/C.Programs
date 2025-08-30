#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter your percentage:");
    scanf("%f", &percentage);
    if (percentage >= 90)
    {
        printf("your grade is A");
    }
    else if (percentage >= 80)
    {
        printf("your grade is B");
    }
    else if (percentage >= 70)
    {
        printf("your grade is C");
    }
    else if (percentage >= 60)
    {
        printf("your grade is D ");
    }
    else
    {
        printf("your grade is F");
    }
    return 0;
}