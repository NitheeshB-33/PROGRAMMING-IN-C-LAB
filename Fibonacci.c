#include <stdio.h>

int main(void) {
  int n,i,c,a=0,b=1;
  printf("Enter a limit:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      printf("%d\t",a);
    
      c=a+b;
      a=b;
      b=c; 
      }
}