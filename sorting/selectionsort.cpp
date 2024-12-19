#include <iostream>
#include <C:\Hafeez\Learning\DSA\sorting\utils.hpp>
using namespace std;

int main()
{

    int arr[] = {9, 7, 4, 1, 8};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size - 1; i++)
    {
        
        int minIndex = linearSearchMin(arr, i, size);
        swap(&arr[minIndex], &arr[i]);
    }
    printArr(arr, size);

    return 0;
}