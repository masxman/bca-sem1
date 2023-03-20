#include <stdio.h>

void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);

int main() {
    int arr[100], n, i;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort using Insertion Sort
    insertionSort(arr, n);
    printf("Sorted array using Insertion Sort: \n");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // Sort using Selection Sort
    selectionSort(arr, n);
    printf("\nSorted array using Selection Sort: \n");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void insertionSort(int arr[], int n) {
    int i, j, key;
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] < key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, max_index, temp;
    for(i = 0; i < n-1; i++) {
        max_index = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}

