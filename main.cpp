#include <iostream>
#include "sorts.h"
using namespace std;

int main()
{
    int array[10] = {2, 5, 8, 1, 3, 9,4, 10, 7, 6};
    quicksort<int>(array, 0, 9);
    //mergesort<int>(array,0,9);
    for(int i=0; i<10; ++i)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}


