#ifndef SORTING_ALGORITHMS_SORTS_H
#define SORTING_ALGORITHMS_SORTS_H

template <class type>
extern void mergesort(type array[], int left, int right);
template <class type>
extern void quicksort(type array[], int left, int right);
template <class type>
extern void merge(type array[], int left, int right);
template <class type>
extern void mergesort(type array[], int left, int right);
template <class type>
extern void introsort(type array[], int left, int right);
template <class type>
extern void introQuick(type array[], int left, int right, int recursionLevel);
template <class type>
extern void heapsort(type array[], int start, int left, int right);

template <class type>
void mySwap(type &first, type &second)
{
    type tmp = first;
    first = second;
    second = tmp;
}
#endif
