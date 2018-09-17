#include<stdio.h>
#define size 100
int main()
{
  int arr[size],i,j,n,k;
  printf("enter no of elements :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter the element%d:",i+1);
    scanf("%d",&arr[i]);
  }
  for(i=1;i<n;i++)
  {
    k=arr[i];
    for(j=i-1;j>=0 && k<arr[j];j--)
    {
            arr[j+1]=arr[j];
    }
    arr[j+1]=k;
  }
  printf("sorted list is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",arr[i]);
  }
}
