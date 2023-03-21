#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    int step, i, j, min_idx;
    for (step = 0; step < size - 1; step++) {
        min_idx = step;
        for (i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        }
        swap(&array[min_idx], &array[step]);
        printf("\nAfter iteration %d: ", step+1);
        for (j = 0; j < size; j++) {
            printf("%d ", array[j]);
        }
        printf("\n");
    }
}

int main() {
    int data[10];
    int size, i;

    printf("Enter the number of elements for array: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }

    printf("\nUnsorted elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }

    selectionSort(data, size);

    printf("\n\nSelection sorted elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}

