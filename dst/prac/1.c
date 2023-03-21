#include <stdio.h>

void linear_search(int array[], int n, int search);
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

    printf("\nUsing Linear Search\n");
    linear_search(array, n, search);

    printf("\nUsing Binary Search\n");
    binary_search(array, n, search);

    return 0;
}

/* Linear search function */
void linear_search(int array[], int n, int search)
{
    int c;

    for (c = 0; c < n; c++)
    {
        if (array[c] == search) /* If required element is found */
        {
            printf("%d is present at location %d.\n", search, c+1);
            break;
        }
    }

    if (c == n)
        printf("%d isn't present in the array.\n", search);
}

/* Binary search function */
void binary_search(int array[], int n, int search)
{
    int first = 0;
    int last = n - 1;
    int middle;

    while (first <= last)
    {
        middle = (first + last) / 2; /* Calculate the middle index */

        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;
    }

    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);
}

