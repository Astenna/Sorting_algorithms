#ifndef SORTING_ALGORITHMS_SORTS_H
#define SORTING_ALGORITHMS_SORTS_H

template <class type>
extern void mergesort(type array[], int left, int right);
template <class type>
extern void quicksort(type array[], int left, int right);
template <class type>
extern void merge(type array[], int left, int sep, int right);

#endif
