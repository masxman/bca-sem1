#include <stdio.h>

// function to swap the position of two elements
void swap(int *a, int *b) {
    int temp;
	temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
	int step,max_idx,i;
    for (step = 0; step < size - 1; step++) {
        max_idx = step;
        for (i = step + 1; i < size; i++) {
            if (array[i] > array[max_idx])
                max_idx = i;
        }
        // put max at the correct position
        swap(&array[max_idx], &array[step]);

        printf("\nElements after %d iteration\n", step+1);
        for(i=0; i<size; i++){
            printf("%d\t", array[i]);
        }
    }
}

int main() {
    int data[10];
    int size,i;

    printf("Enter the number of elements for array:");
    scanf("%d", &size);

    printf("\n\nEnter elements:");
    for(i=0; i<size; i++){
        scanf("%d", &data[i]);
    }

    printf("Entered elements are:");
    for(i=0; i<size; i++){
        printf("%d\t", data[i]);
    }

    selectionSort(data, size);

    printf("\n\nSorted elements in descending order:");
    for(i=0; i<size; i++){
        printf("%d\t", data[i]);
    }

    return 0;
}

