#include<stdio.h>
#define size 100
int main()
{
  int arr[size],i,j,n,temp,min;
  printf("enter no of elements :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter the element%d:",i+1);
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[min]>arr[j])
          min=j;
    }
    if(i!=min)
    {
      temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
  }
  printf("sorted list is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",arr[i]);
  }
}
