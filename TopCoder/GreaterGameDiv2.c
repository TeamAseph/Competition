#include <stdio.h>

#define N 50

int sig(int *snuke, int *sothe, int n)
{
  int count = 0;
  for(int i = 0; i < n ; i++)
    {
      if(snuke[i] > sothe[i]) count++;
    }
  return count;
}

int main()
{
  int n;
  printf("Enter the number of turns: ");
  scanf("%d", &n);
  int snuke[n];
  int sothe[n];

  printf("Enter the numbers on cards of Snuke: ");
  for(int i = 0; i <n ; i ++)
    {
      scanf("%d", &snuke[i]);
    }
  printf("Enter the numbers on cards of Sothe: ");
  for(int i = 0; i <n ; i ++)
    {
      scanf("%d", &sothe[i]);
    }

  int result = sig(snuke, sothe, n);
  printf("Snuke wont %d times!\n", result);
  return 0;
}
  
