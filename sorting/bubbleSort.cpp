#include <iostream>
#include <C:\Hafeez\Learning\DSA\sorting\utils.hpp>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main()
{

    int arr[] = {7, 0, 1, 9, 7, 4, 1, 8, 0};
    int size = sizeof(arr) / sizeof(int);
    bubbleSort(arr, size);
    printArr(arr, size);
    return 0;
}