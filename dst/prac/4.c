#include <stdio.h>

int main() {
	int i, j, count, temp, number[25];

	// Get input from user
	printf("How many numbers are you going to enter?: ");
	scanf("%d", &count);
	printf("Enter %d elements: ", count);
	for (i = 0; i < count; i++) {
    	scanf("%d", &number[i]);
	}

	// Implementation of insertion sort algorithm for descending order
	for (i = 1; i < count; i++) {
    	temp = number[i];
    	j = i - 1;
    	while ((temp > number[j]) && (j >= 0)) {
        	number[j+1] = number[j];
        	j = j - 1;
    	}
    	number[j+1] = temp;
	}

	// Print sorted elements
	printf("Order of Sorted elements (in descending order): ");
	for (i = 0; i < count; i++) {
    	printf("%d ", number[i]);
	}
	printf("\n");

	return 0;
}

