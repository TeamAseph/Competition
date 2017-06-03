#include <stdio.h>
#include <string.h>                                                                            
#include <stdlib.h>                                                                            
                                                                                               
#define MAX 50                                                                                 
                                                                                               
int convertMe(char * digit) {                                                                  
  if (*digit == '0') {                                                                         
    return 6;                                                                                  
  } else if (*digit == '1') {                                                                  
    return 2;                                                                                  
  } else if (*digit == '2') {                                                                  
    return 5;                                                                                  
  } else if (*digit == '3') {                                                                  
    return 5;                                                                                  
  } else if (*digit == '4') {                                                                  
    return 4;                                                                                  
  } else if (*digit == '5') {                                                                  
    return 5;                                                                                  
  } else if (*digit == '6') {                                                                  
    return 6;                                                                                  
  } else if (*digit == '7') {                                                                  
    return 3;                                                                                  
  } else if (*digit == '8') {                                                                  
    return 7;                                                                                  
  } else if (*digit == '9') {                                                                  
    return 6;                                                                                  
  }                                                                                            
  return -1;                                                                                   
}                                                                                              
                                                                                               
                                                                                               
                                                                                               
int main()                                                                                     
{                                                                                              
  char  *code = (char *)  malloc(sizeof(char *)*MAX);                                          
  scanf("%s", code);                                                                           
  if(strlen(code) > 50) { printf("String should be between 1 to 50\n"); exit(1);}              
  int fucking_sum=0;                                                                           
                                                                                               
  for(int i = 0; i < strlen(code); i ++)                                                       
    {                                                                                          
      fucking_sum = fucking_sum + convertMe(code + i);                                         
    }                                                                                          
  printf("%d\n", fucking_sum);                                                                 
  return 0;                                                                                    
}                                                                                              
      
