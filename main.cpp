#include <iostream>
#include "sorts.h"
using namespace std;

int main()
{
    int tableSizes[5] = {10000, 50000, 100000, 500000, 1000000};
    int n = 100; // number of tables to check
    bool correct = true;
    int table[tableSizes[4]];

    /* INITIAL CORRECTNESS CHECKING FOR 10K ELEMENTS TABLES */

    /* quicksort */

    for(int i=0; i<tableSizes[0]; ++i)
    {
        table[i] = rand() % 1000000 + 1;
    }
    quicksort(table, 0, tableSizes[0]);
    for(int i=0; i<tableSizes[0]; ++i)
    {
        if(i != (tableSizes[0]-1))
        {
            if(table[i]>table[i+1])
                correct = false;
        }
    }

    cout << "QUICKSORT" << endl;
    cout << "First 10 000 numbers in correct order: (1 - TRUE, 0 - FALSE) " << correct << endl;

    /* mergesort */
    correct = true;

    for(int i=0; i<tableSizes[0]; ++i)
    {
        table[i] = rand() % 1000000 + 1;
    }
    mergesort(table, 0, tableSizes[0]);
    for(int i=0; i<tableSizes[0]; ++i)
    {
        if(i != (tableSizes[0]-1))
        {
            if(table[i]>table[i+1])
                correct = false;
        }
    }

    cout << "MERGESORT" << endl;
    cout << "First 10 000 numbers in correct order: (1 - TRUE, 0 - FALSE) " << correct << endl;

    /* heapsort with random*/
    correct = true;

    for(int i=0; i<tableSizes[0]; ++i) {
        table[i] = rand() %100000 + 1;
    }
    heapsort(table,1000,10000);
    for(int i=1000; i<10000; ++i)
    {
        if(i != (tableSizes[0]-1))
        {
            if(table[i]>table[i+1])
            {
                correct = false;
            }
        }
    }
    cout << "HEAPSORT random " << endl;
    cout << "First 10 000 numbers in correct order: (1 - TRUE, 0 - FALSE) " << correct << endl;

    /* introsort with random*/
    correct = true;

    for(int i=0; i<tableSizes[0]; ++i) {
        table[i] = 1;// rand() %100000 + 1;
    }
    introsort(table,1000,10000);
    for(int i=1000; i<10000; ++i)
    {
        if(i != (tableSizes[0]-1))
        {
            if(table[i]>table[i+1])
            {
                correct = false;
            }
        }
    }
    cout << "INTROSORT random " << endl;
    cout << "First 10 000 numbers in correct order: (1 - TRUE, 0 - FALSE) " << correct << endl;
}






