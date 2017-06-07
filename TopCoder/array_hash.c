#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int alpha(char ch)
{
  if(ch > 90)
    {
      return ch-97;
    }
  else return ch - 65;
}

int sum(char **str, int n)
{
  int t = 0;
  int sum=0;
  char ch = ' ';
  for(int i = 0; i < n; i++)
    {
      while(ch != '\0')
	{
	  ch = *(str[i] + t);
	  sum = sum + t + i + alpha(ch) ;
	  t++;
	}
      t = 0;
    }
  return sum;
}

int main()
{
  int n;
  printf("Enter the number of strings: ");
  scanf("%d", &n);
  char * ch [n];
  for(int i = 0; i < n; i ++)
    {
      ch[i]  =  (char *) malloc(sizeof(char *)*1000);
      scanf("%s", ch[i]);
    }
  int sum1 = sum(ch, n);
  printf("%d\n", sum1);
  return 0;
}
