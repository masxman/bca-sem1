#include <stdio.h>

int main() {
    int n, i;
    float marks[100], sum = 0, avg;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the marks of the students:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    avg = sum / n;

    printf("The average marks of the students is: %.2f", avg);

    return 0;
}

