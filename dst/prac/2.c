#include <stdio.h>

void bubbleSort(int array[], int size);
void printArray(int array[], int size);

int main() {
    int data[100];
    int size, i;

    printf("Enter the number of elements to be sorted: ");
    scanf("%i", &size);

    for (i = 0; i < size; ++i) {
        printf("Enter element %i: ", i + 1);
        scanf("%i", &data[i]);
    }

    bubbleSort(data, size);
    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);

    return 0;
}

void bubbleSort(int array[], int size) {
    int step, i;
    for (step = 0; step < size - 1; ++step) {
        for (i = 0; i < size - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    int i;
    for (i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

