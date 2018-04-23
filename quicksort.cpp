#include "sorts.h"

template <class type>
void quicksort(type array[], int left, int right)
{
    if(right>left)
    {
        int position = left;
        mySwap(array[(right+left)/2], array[right]);
        type pivot = array[right];

        for(int i=left; i<right; ++i)
        {
            if(array[i] < pivot)
            {
                mySwap(array[i], array[position]);
                ++position;
            }
        }

        mySwap(array[position], array[right]);
        quicksort(array, left, position-1);
        quicksort(array, position+1, right);
    }
}

template void quicksort<int>(int array[], int left, int right);
template void quicksort<float>(float array[], int left, int right);
template void quicksort<long>(long array[], int left, int right);
template void quicksort<double>(double array[], int left, int right);