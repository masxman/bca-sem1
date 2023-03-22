#include <stdio.h>

void binary_search(int array[], int n, int search);

int main()
{
    int array[100], search, c, n;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d integer(s)\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter a number to search\n");
    scanf("%d", &search);
    binary_search(array, n, search);
    return 0;
}

void binary_search(int array[], int n, int search)
{
    int first = 0;
    int last = n - 1;
    int middle;

    while (first <= last) {
        middle = (first + last) / 2;
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) {
            printf("%d found at location %d.\n", search, middle+1);
            return;
        }
        else
            last = middle - 1;
    }

    printf("Not found! %d isn't present in the list.\n", search);
}

