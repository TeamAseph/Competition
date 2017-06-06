#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main()
{
  char *string = (char *) malloc(N*sizeof(char *));
  printf("Enter the fucked up string: ");
  scanf("%s", string);
  int no=0;
  char ch='w';
  while(ch != '\0')
  {
    ch = string[no];
    no = no +1;
  }
  int length = no - 1;
  if(length%2 != 0)
    { printf("The string is not even dude!\n"); exit(1);}
  char r[length/2], l[length/2];
  for(int i= 0 ; i <length/2; i ++)
    {
      l[i] = string[i];
    }
  for(int i = 0 ; i < length/2 ; i ++)
    {
      r[i] = string[length/2 + i];
    }
  char il[length/2], ir[length/2];
  int tlength = length/2;
  for(int i = tlength-1; i >= 0; i--)
    {
      il[(tlength-1) - i] = l[i];
      ir[(tlength-1) - i] = r[i];
    }
  int yo=0;
  char *istring = (char *) malloc(length*sizeof(char *) + 1);
  for(int i = 0; i < length; i ++)
    {
      if(i < tlength)
	istring[i] = ir[i];
      else
	{istring[i] = il[yo]; yo = yo+1;}
    }
  istring[length+1] = '\0';
  printf("The non-fucked up string is: %s\n", istring);
  return 0;
}
