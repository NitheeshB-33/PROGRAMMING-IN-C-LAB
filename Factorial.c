#include <stdio.h>

int main(void) 
{
	int n,i,fact=1;
	printf("Enter the number : ");
    	
    scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("FACTORIAL OF THE NUMBER %d = %d",n,fact);

}
  