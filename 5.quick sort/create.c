#include "quick.h"

int create(int num)
{
  int arr[num];
  printf("Enter the elements in array\n");
  for (int i = 0; i < num; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Array elements are: \n");
  display(arr,num);
  quick(arr,0,num-1);
}
