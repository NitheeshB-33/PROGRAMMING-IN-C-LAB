#include <stdio.h>

int main(void) {
  int n,sum=0,r,temp;
  printf("Ente a number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
  }
  printf("\nReverse of  %d is %d",temp,sum);
  return 0;
 }