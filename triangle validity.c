#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Valid triangle\n");

        if (a == b && b == c)
        {
            printf("Equilateral triangle\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("isosceles triangle\n");
        }
        else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
        {
            printf("right triangle\n");
        }
        else
        {
            printf("scalene triangle\n");
        }
    }
    else
    {
        printf("invalid triangle\n");
    }

    return 0;
}