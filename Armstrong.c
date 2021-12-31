#include <stdio.h>

int main(void) {
    int n,r,sum=0,c,temp=n;
  printf("Enter a number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
    {
      r=n%10;
      c=r*r*r; 
      sum=sum+c;
      n=n/10;
    }
  if(sum==temp) {
 printf("%d is a Armstrong number",temp);
    } else{
  printf("%d is not a Armstrong number",temp);
}return 0;
  }