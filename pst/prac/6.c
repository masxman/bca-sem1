#include <stdio.h>

int main() {
    float percentage;

    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
        printf("Excellent!");
    }
    else if (percentage >= 80) {
        printf("Grade: B\n");
        printf("Very good!");
    }
    else if (percentage >= 70) {
        printf("Grade: C\n");
        printf("Good!");
    }
    else if (percentage >= 60) {
        printf("Grade: D\n");
        printf("Average.");
    }
    else if (percentage >= 40) {
        printf("Grade: E\n");
        printf("Pass.");
    }
    else {
        printf("Grade: F\n");
        printf("Fail.");
    }

    return 0;
}

