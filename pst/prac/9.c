#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], new_arr[n], count = 0;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for (i = 0; i < n; i++) {
        new_arr[count++] = arr[i];
    }

    printf("The array after removing duplicates is:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", new_arr[i]);
    }

    return 0;
}