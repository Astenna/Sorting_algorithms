//
// Created by constance on 18.04.18.
//
#include <cstdlib>
#include <iostream>

using namespace std;

template <class type>
void quicksort(type array[], int left, int right)
{
    if(right>left)
    {
        int position = left;
        type pivot = array[right]; // TO BE CHANGED

        for(int i=left; i<right; ++i)
        {
            if(array[i] < pivot)
            {
                type tmp = array[i];
                array[i] = array[position];
                array[position] = tmp;
                ++position;
            }
        }

        type tmp = array[position];
        array[position] = pivot;
        array[right] = tmp;

        quicksort(array, left, position-1);
        quicksort(array, position+1, right);
    }
}