#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the number (a):\n");
    scanf("%d", &a);
    printf("enter the number (b):\n");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("after swapping a = %d , b = %d\n", a, b);
    return 0;
}