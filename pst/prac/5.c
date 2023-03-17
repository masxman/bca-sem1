#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        printf("Enter a number (999 to exit): ");
        scanf("%d", &num);

        if (num > 0) {
            sum += num;
        }
    } while (num != 999);

    printf("Sum of positive numbers: %d\n", sum);

    return 0;
}

