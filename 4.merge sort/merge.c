#include<stdio.h>
#include"merge.h"
#define size 100
void merge(int arr[],int temp[],int low1,int up1,int low2,int up2)
{
  int i=low1;
  int j=low2;
  int k=low1;
  while((i<=up1) && (j<=up2))
  {
    if(arr[i]<=arr[j])
        temp[k++]=arr[i++];
    else
        temp[k++]=arr[j++];
  }
  while(i<=up1)
       temp[k++]=arr[i++];
  while(j<=up2)
       temp[k++]=arr[j++];
}
