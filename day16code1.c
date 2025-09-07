#include <stdio.h>

int main() {
    int num, binary, i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }
    while (num > 0) {
        binary = num % 2;
        num = num / 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary);
    }

    printf("\n");
    return 0;
}
