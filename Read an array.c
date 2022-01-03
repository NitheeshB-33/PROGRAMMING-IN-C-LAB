#include<stdio.h>
int main(void)
{
  int a[5],i;
  printf("enter array elements");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
printf("array elements are:");
  for(i=0;i<5;i++)
    {
      printf("%d\t",a[i]);
    }
return 0;
  } 