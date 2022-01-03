#include <stdio.h>
int main(void)
{
  int a[50],i,n;
  printf("enter the size of array");
  scanf("%d",&n);
  printf("enter the array elements");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
printf("array elements are:");
  for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
return 0;
  } 