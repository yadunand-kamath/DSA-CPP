#include "SearchingAlgorithms.h"
#include "SortingAlgorithms.h"

int SearchingAlgorithms::LinearSearch(std::vector<int> arr, int searchKey)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == searchKey)
            return i;
            
    }
    return -1;
}

int SearchingAlgorithms::BinarySearch(std::vector<int> arr, int searchKey)
{
    SortingAlgorithms::SelectionSort(arr);

    int startIdx = 0;
    int endIdx = arr.size() - 1;

    while (startIdx <= endIdx)
    {
        int midIdx = (startIdx + endIdx) / 2;
        if (arr[midIdx] == searchKey)
            return midIdx;
        else if (searchKey > arr[midIdx])
            startIdx = midIdx + 1;
        else
            endIdx = midIdx - 1;
    }
    return -1;
}
