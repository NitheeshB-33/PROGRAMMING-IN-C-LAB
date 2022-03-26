#include <stdio.h>
void binarysearch();
int a[20],n;
int main(void)
{
 binarysearch();
  return 0;
}
void binarysearch()
{
  int i,item,beg,end,mid,pos=1;
  printf("Enter size of the array");
  scanf("%d",&n);
  printf("enter array elements");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("\n Array elements are");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("Enter the element to be searched");
  scanf("%d",&item);
  beg=0;
  end=n-1;
  while(beg<=end)
    {
      mid=(beg+end)/2;
      if(a[mid]==item)
{
  pos= mid;
  printf("Successful search...%d found at location %d",item,pos+1);
  break;
}
      else if(a[mid]>item)
        end=mid-1;
      else
beg= mid+1;
      if(pos==1)
      {
        printf("unsuccessful search!! value is not present in the array");
        }
    }

  }
