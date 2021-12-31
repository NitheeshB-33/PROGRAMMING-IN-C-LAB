#include <stdio.h>

int main(void) {
  int n,r,sum=0,temp=n;
  printf("Enter a number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
    {
      r=n%10;
      sum=sum*10+r;
      n=n/10;
    }
  if(sum==temp) {
 printf("%d is a palindrome number",temp);
    } else{
  printf("%d is not a palindrome number",temp);
}return 0;
}