#include <stdio.h>

int main(void) {
  int i,j,n;
  printf("Enter no of rows:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
      {
        printf("*\t"); 
      }
    printf("\n");
  }
  return 0; 
} 