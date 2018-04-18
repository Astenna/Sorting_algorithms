#include <iostream>
using namespace std;

template<class type>
void quicksort(type array[], int right, int left);

int main()
{
    int array[10] = {2, 5, 8, 1, 3, 9,4, 10, 7, 6};
    quicksort(array, 0, 9);
    for(int i=0; i<10; ++i)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}
