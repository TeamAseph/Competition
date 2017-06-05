#include <stdio.h>

int main()
{
  int n;
  printf("Enter the number of teams: ");
  scanf("%d", &n);
  int win[n], ties[n];
  printf("Enter the number of wins: ");
  for(int i = 0; i < n; i ++)
    {
      scanf("%d", (win+i));
    }
  printf("Enter the number of ties: ");
  for(int i = 0; i < n; i ++)
    {
      scanf("%d", (ties+i));
    }

  int mul[n];
  for(int i = 0; i <n ; i ++)
    {
      mul[i] = 3*win[i] + 1*ties[i];
    }
  int high = mul[0];
  for(int i= 0; i < n; i ++)
    {
      if(high < mul[i])
	high = mul[i];
    }
  printf("The highest points among the given points for a team is: %d\n", high);
  return 0;
}
