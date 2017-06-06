#include <stdio.h>

void derivative(int a[], int n, int o)
{
  n = n -1;
  o = o -1;
  int ar[n];
  for(int i = 0; i < n-1; i++)
    {
      ar[i] = a[i+1] - a[i];
    }
  if(o == 0)
    {
      printf("The Nth order derivative is: ");
      for(int i = 0; i< n; i++)
	{
	  printf("%d\n", ar[i]);
	}
    }
  
  if(o != 0) derivative(ar, n, o);
}
  

int main()
{
  printf("Enter the number of elements in sequence: ");
  int n;
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements of sequence: ");
  for(int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
  printf("Enter the order: ");
  int o;
  scanf("%d", &o);
  derivative(a, n, o);
  return 0;
}
