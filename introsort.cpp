#include <cmath>
#include "sorts.h"

template <class type>
void introsort(type array[], int left, int right)
{
    int m = 2*log2(right-left+1);
    introsortRecursive(array,left,right,m);
}

template <class type>
void introsortRecursive(type array[], int left, int right, int recursionLevel)
{
    if(right>left)
    {
        if(recursionLevel > 0)
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
            introsortRecursive(array, left, position-1, recursionLevel-1);
            introsortRecursive(array, position+1, right, recursionLevel-1);
        }
        else
            heapsort(array,left,right);
    }
}


template void introsort<int>(int array[], int left, int right);
template void introsort<float>(float array[], int left, int right);
template void introsort<long>(long array[], int left, int right);
template void introsort<double>(double array[], int left, int right);
template void introsortRecursive<int>(int array[], int left, int right, int recursionLevel);
template void introsortRecursive<float>(float array[], int left, int right, int recursionLevel);
template void introsortRecursive<long>(long array[], int left, int right, int recursionLevel);
template void introsortRecursive<double>(double array[], int left, int right, int recursionLevel); 


