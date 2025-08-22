#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("Enter length and breadth of rectangle:");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf(" area of rectangle : %f\n ", area);
    printf(" perimeter of rectangle : %f\n ", perimeter);
    return 0;
}