#include <iostream>
#include <chrono>
#include <fstream>
#include <algorithm>
#include "sorts.h"
using namespace std;

template <class type>
bool checkIfSorted(type array[], int size);
template <class type>
void addRandomSorted(type array[], int size, float percentage);

int main()
{
    int size[] = {10000, 15000, 25000, 50000, 75000};
    float percentSorted[] = {0, 25, 50, 75, 95, 99, 99.7};
    int n = 100, j = 0, i = 0; // number of arrays to check
    int array[75000];      // i,j for indexing size and percentSorted
    std::chrono::time_point<std::chrono::system_clock> start, end;
    ofstream file;
    string fileName;

    /* INITIAL CORRECTNESS CHECKING FOR 10K? ELEMENTS ARRAYS */

    addRandomSorted(array, size[i], percentSorted[j]);
    quicksort(array, 0, size[i]);
    cout << "QUICKSORT checked for " << size[i] << " elements" << endl;
    checkIfSorted(array, size[i]);

    addRandomSorted(array, size[i], percentSorted[j]);
    mergesort(array, 0, size[i]);
    cout << "MERGESORT checked for " << size[i] << " elements" << endl;
    checkIfSorted(array, size[i]);

    addRandomSorted(array, size[i], percentSorted[j]);
    introsort(array, 0, size[i]);
    cout << "INTROSORT checked for " << size[i] << " elements" << endl;
    checkIfSorted(array, size[i]);

    /* MEASUREMENTS FOR STATISTICS */
    // values to change - i,j
    i=4; // from 0 to 4 // 10k 50k 75k
    // index of array size[] = 10K 15K 25K 50K 75K
    for(j=1;j<=6;++j) // from 0 to 6
    { // index of array percentSorted[] = 0, 25, 50, 75, 95, 99, 99.7
        fileName = "E" + to_string(size[i]) + "S" + to_string(ceil(percentSorted[j]));
        file.open(fileName, ios::app);

        for (int k = 0; k < n; ++k) {
            addRandomSorted(array, size[i], percentSorted[j]);
            start = std::chrono::system_clock::now();
            mergesort(array, 0, size[i]);
            end = std::chrono::system_clock::now();
            file << std::chrono::duration_cast<std::chrono::milliseconds>(
                    end - start).count() << " , ";

            addRandomSorted(array, size[i], percentSorted[j]);
            start = std::chrono::system_clock::now();
            quicksort(array, 0, size[i]);
            end = std::chrono::system_clock::now();
            file << std::chrono::duration_cast<std::chrono::milliseconds>(
                    end - start).count() << " , ";

            addRandomSorted(array, size[i], percentSorted[j]);
            start = std::chrono::system_clock::now();
            introsort(array, 0, size[i]);
            end = std::chrono::system_clock::now();
            file << std::chrono::duration_cast<std::chrono::milliseconds>(
                    end - start).count() << " ,";

            file << endl;
        }
        file.close();
    }
}
template <class type>
void addRandomSorted(type array[], int size, float percentage)
{
    int sorted= (percentage/100)*size;
    for(int i=0; i<size; ++i)
    {
        array[i] = rand() % size*10 +1;
    }
    sort(array, array+sorted);
}

template <class type>
bool checkIfSorted(type array[], int end)
{
    for(int i=end; i<end; ++i)
    {
        if(i != (end-1))
        {
            if(array[i]>array[i+1])
            {
                cout << "Something went wrong! :(" << endl;
                return false;
            }
        }
    }
    cout << "Works perfect!" << endl;
    return true;
}




