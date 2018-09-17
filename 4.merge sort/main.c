#include<stdio.h>
#include"merge.h"
#define size 100
int main()
{
  int arr[size],i,n;
  printf("enter the no of element:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter the element%d:",i+1);
    scanf("%d",&arr[i]);
  }
  merge_sort(arr,0,n-1);
    printf("sorted list is:\n");
    for(i=0;i<n;i++)
     printf("%d\t",arr[i]);
}
