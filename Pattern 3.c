#include <stdio.h>

int main(void) {
  int i,j,count=1;
  for(i=5;i>=1;i--)
    {
      for(j=1;j<=i;j++)
    {
      printf("%d\t",count);
      count++;
    } 
      printf("\n");
      }
  return 0;
} 