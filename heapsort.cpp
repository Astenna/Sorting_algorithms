#include "sorts.h"

template <class type>
void heapsort(type array[], int left, int right)
{
    for(int i=(right-left+1)/2; i>=0; --i)
    {
        heapify(array, left, right, i);
    }

    for(int i=right; i>left; --i)
    {
        mySwap(array[left], array[i]);
        heapify(array,left, i-1, 0);
    }
}

template <class type>
void heapify(type array[], int start, int end, int node)
{
    int max = start + node;
    int leftChild = start + (2*node) + 1;
    int rightChild = start + (2*node) + 2;

    if(leftChild <= end && array[leftChild] > array[max]) // end also
    {
        max = leftChild;
    }
    if(rightChild <= end && array[rightChild] > array[max]) // end also
    {
        max = rightChild;
    }
    if(max != start + node)
    {
        mySwap(array[max], array[start+node]);
        heapify(array, start, end, max-start);
    }
}

template void heapsort<int>(int array[], int start, int size);
template void heapsort<float>(float array[], int start, int size);
template void heapsort<long>(long array[], int start, int size);
template void heapsort<double>(double array[], int start, int size);
template void heapify<int>(int array[], int start, int end, int node);
template void heapify<float>(float array[],int start, int end, int node);
template void heapify<long>(long array[], int start, int end, int node);
template void heapify<double>(double array[], int start, int end, int node);