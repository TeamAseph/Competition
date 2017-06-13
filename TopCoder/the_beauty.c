#include <stdio.h>

int main()
{
  printf("Enter the int: ");
  unsigned  int long n;
  scanf("%ld", &n);
  int beauty = 0 ;
  int rem[1000];
  int count = 0;
  int flag = 0;
  while(n > 1)
    {
      n = n/10;
      rem[count] = n%10;
      for(int i = 0; i < count; i++)
	{
	  if(rem[i] == n%10) flag =1;
	}
      if(flag == 0) beauty ++;
      flag = 0;
      count++;
    }
  printf("Its beauty is %d!\n", beauty);
  return 0;
}
