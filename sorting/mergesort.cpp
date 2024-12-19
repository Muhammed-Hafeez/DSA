#include <iostream>
#include <C:\Hafeez\Learning\DSA\sorting\utils.hpp>
using namespace std;

// Merge function to merge two sorted subarrays
void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int temp[high - low + 1];
    int k = 0;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[k] = arr[left];
            left++;
        }
        else
        {
            temp[k] = arr[right];
            right++;
        }
        k++;
    }
    while (left <= mid)
    {
        temp[k] = arr[left];
        left++;
        k++;
    }
    while (right <= high)
    {
        temp[k] = arr[right];
        right++;
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        arr[low + i] = temp[i];
    }
}

void MergeSort(int arr[], int low, int high)
{
    // first we have to divide the array into two hypothetical arrays
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{

    int arr[] = {3, 2, 1, 4, 5, 73, 2};
    int size = sizeof(arr) / sizeof(int);
    MergeSort(arr, 0, size - 1);
    printArr(arr, size);
    return 0;
}