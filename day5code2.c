#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds); // 02d so that the format comes in two digits,only d would result in single digit

    return 0;
}
