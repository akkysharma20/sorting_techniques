#include "quick.h"

int partition (int arr[], int index, int num)
{
    int pivot = arr[num];    // pivot
    int i = (index - 1);  // Index of smaller element

    for (int j = index; j <= num- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[num]);
    return (i + 1);
}
