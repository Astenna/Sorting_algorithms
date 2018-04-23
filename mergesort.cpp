#include "sorts.h"

template <class type>
void merge(type array[], int left, int sep, int right)
{
    type tmpArray[right];
    for(int i=left; i<=right; ++i)
    {
        tmpArray[i] = array[i];
    }

    int j=left, l = left, r=sep+1;

    while(l<=sep && r<=right)
    {
        if(array[l]>array[r])
        {
            tmpArray[j++]=array[r++];
        }
        else
        {
            tmpArray[j++]=array[l++];
        }
    }
    if(l<=sep)
    {
        while(l<=sep)
        {
            tmpArray[j++]=array[l++];
        }
    }
    else
    {
        while(r<=right)
        {
            tmpArray[j++]=array[r++];
        }
    }
    for(int i=left; i<=right; ++i)
    {
        array[i] = tmpArray[i];
    }
}
template <class type>
void mergesort(type array[], int left, int right)
{
    if(left < right)
    {
        int sep = (left+right)/2;
        mergesort(array, left, sep);
        mergesort(array, sep+1, right);
        merge(array, left, sep, right);
    }
}

template void merge<int>(int array[], int left, int sep, int right);
template void merge<float>(float array[], int left, int sep, int right);
template void merge<long>(long array[], int left, int sep, int right);
template void merge<double>(double array[], int left, int sep, int right);
template void mergesort<int>(int array[], int left, int right);
template void mergesort<float>(float array[], int left, int right);
template void mergesort<long>(long array[], int left, int right);
template void mergesort<double>(double array[], int left, int right);