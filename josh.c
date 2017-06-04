#include <stdio.h>

int main()
{
  int n;
  printf("Enter the number of sticks: ");
  scanf("%d", &n);
  int ssum = (n/2);
  int  arrayl[ssum+1], arrayb[ssum+1];
  for(int i = 0; i <= ssum ; i ++)
    {
      arrayl[i] = i;
      arrayb[i] = ssum-i;
    }

  
  int mularray[ssum+1];
  int sumarray[ssum+1];

  for(int i = 0 ; i <=ssum ; i++)
    {
      mularray[i] = arrayl[i] * arrayb[ssum-i];
      sumarray[i] = arrayl[i] + arrayb[ssum -i];
      
    }

  for(int i = 0; i <= ssum ; i++)
    {
      printf("%d  %d\n", mularray[i], sumarray[i]);
    }

  int high=0;

  for(int i = 0; i <= ssum ; i++)
    {
      if(sumarray[i] <= ssum)
      	if(mularray[i] > high)
	  high = mularray[i];
    }

  printf("Rectangle with highest area: %d\n", high );
  return 0;
}
