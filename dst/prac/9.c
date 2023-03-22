#include <stdio.h>
#include <conio.h>

void bubbleSort(array, size)
int array[];
int size;
{
    int temp, i, j;
    for (i = 0; i < size - 1; ++i) {
        for (j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(array, size)
int array[];
int size;
{
    int i;
    for (i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {5,3,1,6,0,2,4};
    int size = sizeof(data) / sizeof(data[0]);
	printf("Un-Sorted Array:\n");
	printArray(data,size);
    bubbleSort(data, size);
    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
    getch();
    return 0;
}

