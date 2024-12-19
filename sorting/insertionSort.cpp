#include <bits/stdc++.h>
#include "C:\Hafeez\Learning\DSA\sorting\utils.hpp"
using namespace std;

void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int sorted = i - 1; // first consider the part of an array is sorted
        while (sorted >= 0 && arr[sorted] > key)
        {
            //right shift the array elements till the while condition in the reverse fashion
            arr[sorted + 1] = arr[sorted];
            sorted--;
        }
        arr[sorted + 1] = key; // put the key elemnets in its right place
    }
}
int main()
{

    int arr[] = {22, 4, 1, 6, 8, 9};
    InsertionSort(arr, sizeof(arr) / sizeof(int));
    printArr(arr, sizeof(arr) / sizeof(int));
    return 0;
}