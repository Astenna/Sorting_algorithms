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
                introsortRecursive(array, left, pivot, recursionLevel-1);
                introsortRecursive(array, pivot+1, right, recursionLevel-1);
            }
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


