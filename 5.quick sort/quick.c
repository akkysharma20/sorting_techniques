#include "quick.h"

void quick(int arr[], int index, int num)
{
    if (index < num)
    {
        int pi = partition(arr, index, num);

        quick(arr, index, pi - 1);
        quick(arr, pi + 1, num);
    }
    printf("Array elements after quick sorting: \n");
    display(arr,num+1);
}
