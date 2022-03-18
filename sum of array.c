#include <stdio.h>
void create();
int main(void)
{
  create();
}
void create()
{
  int n,a[100],i=0,sum=0;
  printf("enter the size of array");
  scanf("%d",&n);
  printf("enter array elements");
  while(i<=n-1)
    {
      scanf("%d",&a[i]);
      sum=sum+a[i];
      i++;
    }
  printf("Sum of array elements is %d",sum);
  return 0;
  } 