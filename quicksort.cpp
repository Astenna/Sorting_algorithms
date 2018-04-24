#include "sorts.h"

template <class type>
void quicksort(type array[], int left, int right)
{
    if(right>left)
    {
        int pivot = (right+left)/2;
        int l = left;
        int r = right-1;
        while( l < r)
        {
            while(array[l] < array[pivot])
                l++;
            while(array[r] > array[pivot])
                r--;
            mySwap(array[l++],array[r--]);
        }
        quicksort(array, left, pivot);
        quicksort(array, pivot+1, right);
    }

}

template void quicksort<int>(int array[], int left, int right);
template void quicksort<float>(float array[], int left, int right);
template void quicksort<long>(long array[], int left, int right);
template void quicksort<double>(double array[], int left, int right);


