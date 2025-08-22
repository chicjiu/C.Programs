#include <stdio.h>
int main()
{
    float radius, area, circumference;
    const float pi = 3.14159;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("area= %.2f\n", area);
    printf("circumference= %.2f\n", circumference);
    return 0;
}