#include <stdio.h>
int main() {
    int n, i;
    int num[100], sum = 0;
  float avg;

    printf("Enter the numbers of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("%d. Enter marks: ", i + 1);
        scanf("%d", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}

