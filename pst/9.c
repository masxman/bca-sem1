#include <stdio.h>
int main ()
{
    // declare local variables
    int arr[20], i, j, k, size;
          printf (" Enter the number of elements in an array: ");
    scanf (" %d", &size);

    printf (" \n Enter %d elements of an array: \n ", size);
    // use for loop to enter the elements one by one in an array
    for ( i = 0; i < size; i++)
    {
        scanf (" %d", &arr[i]);
    }
            // use nested for loop to find the duplicate elements in array
    for ( i = 0; i < size; i ++)
    {
        for ( j = i + 1; j < size; j++)
        {

            if ( arr[i] == arr[j])
            {

                for ( k = j; k < size - 1; k++)
                {
                    arr[k] = arr [k + 1];
                }
                // decrease the size of array after removing duplicate element
                size--;

                j--;
            }
        }
    }

    printf (" \n Array elements after deletion of the duplicate elements: ");
    for(i=0;i<size;i++)
    {
	    printf("%d\t",arr[i]);
    }
    return 0;
}

