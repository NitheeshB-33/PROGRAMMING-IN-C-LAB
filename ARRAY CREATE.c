#include <stdio.h>
void create();
int main(void)
{
  create();
}
void create()
{
  int n,a[100],i=0;
  printf("enter the size of array");
  scanf("%d",&n);
  printf("enter array elements");
  while(i<=n-1)
    {
      scanf("%d",&a[i]);
      i++;
    }
  printf("Array elements are");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
    
  }
   return 0; 
  }