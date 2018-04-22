#include <algorithm>
#include <vector>

int partition( std::vector< double > &a, int low, int high );

void quickSort( std::vector< double > &a, int low, int high)
{
    if (low < high)
    {
        int pIdx = partition(a, low, high);
        quickSort(a, low, pIdx - 1);  // Before pi
        quickSort(a, pIdx + 1, high); // After pi
    }
}

int partition( std::vector< double > &a, int low, int high )
{
    int pivot = a[low];  
 
    int i = low , j = high;

    while( i <= j )
    {
        while( a[ i ] < pivot ) ++i;
        while( a[ j ] > pivot ) --j;
        if( i <= j )
            std::swap( a[i++] , a[j--]);
    }
    return low;
}