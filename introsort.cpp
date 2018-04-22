#include <cmath>

template <class type>
void introQuick(type array[], int left, int right, int recursionLevel);

template <class type>
void heapsort(type array, int left, int right);

template <class type>
void swap(type first, type second);

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
                    swap(array[i], array[position]);
                    ++position;
                }
            }

            swap(array[position], array[right]);
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
void heapsort(type array, int size, int node)
{
    const int root = 0;
    type max = root;
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
        swap(array[root], array[max]);
        heapsort(array, size, node+1);
    }
}

template <class type>
void swap(type first, type second)
{
    type tmp = first;
    first = second;
    second = tmp;
}