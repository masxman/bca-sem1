#include <stdio.h>

// Function to perform linear search on the array
int linear_search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; // If element is not present in array
}

// Function to perform binary search on the array
int binary_search(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // If element is not present in array
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using linear search to find location of 7
    int linear_result = linear_search(arr, n, 7);
    if (linear_result == -1) {
        printf("7 not found using linear search\n");
    } else {
        printf("7 found at index %d using linear search\n", linear_result);
    }

    // Using binary search to find location of 7
    int binary_result = binary_search(arr, n, 7);
    if (binary_result == -1) {
        printf("7 not found using binary search\n");
    } else {
        printf("7 found at index %d using binary search\n", binary_result);
    }

    return 0;
}

