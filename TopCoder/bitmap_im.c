#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bool char

int main()
{
  printf("Enter rows: ");
  int r, c;
  scanf("%d", &r);
  printf("Enter columns: ");
  scanf("%d", &c);
  bool array[r][c+1];
  for(int i = 0 ; i < r ; i ++)
    {
      printf("Enter row number %d(only 0s and 1s): ", i+1);
      scanf("%s", *(array +1));
    }
  int k;
  printf("Enter k: ");
  scanf("%d", &k);
  if((r%k != 0) || c%k != 0)
    {
      printf("Error: k doesnt divide number of rows and columns!\n");
      exit(1);
    }

  int dr = r/k;
  int dc = c/k;

  int count=0;
  int y = 0;
  while(y <= r)
    {
      if(array[y][0]==1)
	{
	  for(int i = 0 ; i < dr;  i ++)
	    {
	      if(array[(y)+i][0] == 0) count = 1;
	    }
	}
      y = y+dr;
    }

    y = 0;
  while(y <= r)
    {
      if(array[y][0]==0)
	{
	  for(int i = 0 ; i < r;  i ++)
	    {
	      if(array[(y)+i][0] == 1) count = 1;
	    }
	}
      y = y+dr;
    }

  
 y = 0;
 while(y <= c)
    {
      if(array[0][y]==1)
	{
	  for(int i = 0 ; i < dc;  i ++)
	    {
	      if(array[0][(y)+i] == 0) count = 1;
	    }
	}
      y = y+dc;
    }

  y = 0;
 while(y <= c)
    {
      if(array[0][y]==0)
	{
	  for(int i = 0 ; i < dc;  i ++)
	    {
	      if(array[0][(y)+i] == 1) count = 1;
	    }
	}
      y = y+dc;
    }
 if(count == 0)
   {
     printf("POSSIBLE!!\n");
   }
 else
   {
     printf("IMPOSSIBLE!!\n");
   }
  
  
  return 0;
}
