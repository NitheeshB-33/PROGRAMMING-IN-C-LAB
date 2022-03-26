#include <stdio.h>
void create ();
void display ();
int a[100],n;
int main()
{
  int ch;
  do{
  printf("ARRAY OPERATIONS");
  printf("\n1.CREATE\n2.INSERT\n3.DELETE\n4.DISPLAY\n5.EXIT");
printf("\nenter your choice:");
  scanf("%d",&ch);
   switch(ch)
      {
        case 1:
          create();
        printf("\n array created");
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        display();
        break;
        case 5:
        break;
      }
    }while(ch!=5);
  return 0;
}
void create()
{
  int i;
  printf("enter array size:");
  scanf("%d",&n);
  printf("enter array elements");
  for(i=0;i<=n-1;i++)
    {
  scanf("%d",&a[i]);  
      } 
}
void display()
{
  int i;
  printf("Array elements are:");
  for(i=0;i<=n-1;i++)
    {
      printf("%d\t",a[i]);
    }
  printf("\n");
  }