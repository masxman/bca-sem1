#include <stdio.h>

int main() {
    int num, original_num, sum = 0, reverse_num = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    // Find sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    // Reverse the number
    while (original_num != 0) {
        remainder = original_num % 10;
        reverse_num = reverse_num * 10 + remainder;
        original_num /= 10;
    }

    printf("Reverse of number: %d\n", reverse_num);

    // Check if palindrome
    if (original_num == reverse_num) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}

