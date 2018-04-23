#include <cmath>
#include "sorts.h"
template <class type>
void introsort(type array[], int left, int right)
{
    int m = (right-left)*log2(right-left);
    introQuick(array,left,right,m);
}

template <class type> //without left!
void introQuick(type array[], int left, int right, int recursionLevel)
{
    if(right>left)
    {
        if(recursionLevel > 0)
        {
            int position = left;
            type pivot = array[right]; // TO BE CHANGED

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
            heapsort(array, right, 0);
        }
    }
}

template <class type>
void heapsort(type array[], int size, int node)
{
    const int root = 0;
    type max = array[root];
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
    if(max != array[root])
    {
        mySwap(array[root], max);
        heapsort(array, size, node+1);
    }
}

template void introQuick<int>(int array[], int left, int right, int recursionLevel);
template void introQuick<float>(float array[], int left, int right, int recursionLevel);
template void introQuick<long>(long array[], int left, int right, int recursionLevel);
template void introQuick<double>(double array[], int left, int right, int recursionLevel);
template void heapsort<int>(int array[], int size, int node);
template void heapsort<float>(float array[], int size, int node);
template void heapsort<long>(long array[], int size, int node);
template void heapsort<double>(double array[], int size, int node);
template void introsort<int>(int array[], int left, int right);
template void introsort<float>(float array[], int left, int right);
template void introsort<long>(long array[], int left, int right);
template void introsort<double>(double array[], int left, int right);
