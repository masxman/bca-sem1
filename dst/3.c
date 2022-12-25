#include <stdio.h>

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] > array[min_idx])
        min_idx = i;
    }
    // put min at the correct position
    swap(&array[min_idx], &array[step]);
    printf("\nElements after %d iteration\n", step);
    for(int i=0; i<size; i++){
      printf("%d\t", array[i]);
    }
  }
}

// Implementation of insertion sort algorithm
void insertionSort(int array[], int size) {
  for(i=1;i<size;i++){
    temp=array[i];
    j=i-1;
    while((temp<array[j])&&(j>=0)){
      array[j+1]=array[j];
      j=j-1;
    }
    array[j+1]=temp;
  }
  printf("Order of Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d", array[i]);
  return 0;
}

int main() {
  int data[10];
  int size;
  printf("Enter the number of elements for array:");
  scanf("%d", &size);
  printf("\n\n Enter elements:");
  for(int i=0; i<size; i++){
    scanf("%d", &data[i]);
  }
  printf(" entered elements are :");
  for(int i=0; i<size; i++){
    printf("%d\t", data[i]);
  }
  selectionSort(data, size);
  insertionSort(data, size);
  return 0;
}

