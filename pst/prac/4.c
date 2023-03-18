#include <stdio.h>

int main() {
    int n, sum = 0, reverse = 0, digit;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    // calculate sum of digits
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    // calculate reverse of number
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    printf("The sum of digits is %d\n", sum);

    if (n == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
