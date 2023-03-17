#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main() {
    int num;
    bool prime;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    prime = isPrime(num);

    if (prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

