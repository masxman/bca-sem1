// Selection sort in C
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
}
// C program using insertion sort
#include<stdio.h>
int main(){
int i, j, count, temp, number[25];
printf("How many numbers u are going to enter?: ");
scanf("%d",&count);
printf("Enter %d elements: ", count);
for(i=0;i<count;i++)
scanf("%d",&number[i]);
// Implementation of insertion sort algorithm
for(i=1;i<count;i++){
temp=number[i];
j=i-1;
while((temp<number[j])&&(j>=0)){
number[j+1]=number[j];
j=j-1;
}
number[j+1]=temp;
}
printf("Order of Sorted elements: ");
for(i=0;i<count;i++)
printf(" %d", number[i]);
return 0;
}
