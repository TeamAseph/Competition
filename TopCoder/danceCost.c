#include <stdio.h>

void insertionSort(int arr[], int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
    {
      key = arr[i];
      j = i-1;

      /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
      while (j >= 0 && arr[j] > key)
	{
	  arr[j+1] = arr[j];
	  j = j-1;
	}
      arr[j+1] = key;
    }
}

int main()
{
  printf("Enter the total number of dances: ");
  int n;
  scanf("%d", &n);
  int costDance[n];
  printf("Keep entering the cost of each dance: ");
  for(int i = 0; i < n; i++)
    {
      scanf("%d", &costDance[i]);
    }
  printf("Enter the number of dances you wanna learn: ");
  int k;
  scanf("%d", &k);
  insertionSort(costDance, n);
  int sum = 0;
  for(int i = 0; i <k; i++)
    {
      sum = sum + costDance[i];
    }
  printf("Keeping in mind that you is poor, you have to pay just %d\n", sum);
  return 0;
}
