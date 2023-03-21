#include <stdio.h>

void linear_search(int array[], int n, int search);

int main()
{
  int array[100], search, n, c;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  linear_search(array, n, search);

  return 0;
}

void linear_search(int array[], int n, int search)
{
  int c;

  for (c = 0; c < n; c++)
  {
    if (array[c] == search) /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      return;
    }
  }

  printf("%d isn't present in the array.\n", search);
}

