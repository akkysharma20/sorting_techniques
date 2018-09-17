#include<stdio.h>
#include"merge.h"
#define size 100
void merge_sort(int arr[],int low,int up)
{
  int mid;
  int temp[size];
  if(low<up)
  {
  mid=(low+up)/2;
  merge_sort(arr,low,mid);
  merge_sort(arr,mid+1,up);
  merge(arr,temp,low,mid,mid+1,up);
  copy(arr,temp,low,up);
  }
}
