#include <stdio.h>
int main()
{
    int num, first, last, temp, place = 1, new_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = temp % 10;
    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }
    first = temp;

    new_num = last * place + (num % place - last) + first;
    printf("Number after swapping first and last digits: %d\n", new_num);
    return 0;
}