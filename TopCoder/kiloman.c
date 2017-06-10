#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  printf("Enter the total number of shots: ");
  int n;
  scanf("%d", &n);
  int height[n];
  printf("Keep entering the height of shots: ");
  for(int i=0; i<n; i++)
    {
      scanf("%d", &height[i]);
    }
  char *js = (char *) malloc(sizeof(char *)*n + 1);
  printf("Now enterting the state string of Kiloman, 'J' or 'S': ");
  scanf("%s", js);
  if(strlen(js) > n) { printf("invalid!\n"); exit(1);}
  int hits = 0;
  for(int i= 0; i<n ; i++)
    {
      if(height[i] > 2 && *(js+i) == 'J') hits++;
      if(height[i] <= 2 && *(js+i)  == 'S') hits++;
    }
  printf("Kilo man is hit %d times!\n", hits);
  return 0;
}
