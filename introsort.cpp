#include <cmath>
#include "sorts.h"

template <class type>
void introsort(type array[], int left, int right)
{
    int m = (right-left)*log2(right-left);
    introQuick(array,left,right,m);
}

template <class type>
void introQuick(type array[], int left, int right, int recursionLevel)
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
            introQuick(array, left, position-1, --recursionLevel);
            introQuick(array, position+1, right,recursionLevel);
        }
        else
        {
            heapsort(array, left, right, 0);
        }
    }
}

template <class type>
void heapsort(type array[], int start, int size, int node)
{
    type max = array[start];
    int leftChild = 2*node+1;
    int rightChild = 2*node+2;

    if(leftChild < size && array[leftChild] > max)
    {
        max = array[leftChild];
    }
    if(rightChild < size && array[rightChild] > max)
    {
        max = array[rightChild];
    }
    if(max != array[start])
    {
        mySwap(array[start], max);
        heapsort(array,start, size, node+1);
    }
}

template void introQuick<int>(int array[], int left, int right, int recursionLevel);
template void introQuick<float>(float array[], int left, int right, int recursionLevel);
template void introQuick<long>(long array[], int left, int right, int recursionLevel);
template void introQuick<double>(double array[], int left, int right, int recursionLevel);
template void heapsort<int>(int array[], int start, int size, int node);
template void heapsort<float>(float array[], int start, int size, int node);
template void heapsort<long>(long array[], int start, int size, int node);
template void heapsort<double>(double array[], int start, int size, int node);
template void introsort<int>(int array[], int left, int right);
template void introsort<float>(float array[], int left, int right);
template void introsort<long>(long array[], int left, int right);
template void introsort<double>(double array[], int left, int right);
