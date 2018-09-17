#include<stdio.h>
#include"merge.h"
#define size 100
void copy(int arr[],int temp[],int low,int up)
{
  int i;
  for(i=low;i<=up;i++)
    arr[i]=temp[i];
}
