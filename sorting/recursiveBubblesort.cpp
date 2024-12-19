#include <iostream>
#include <C:\Hafeez\Learning\DSA\sorting\utils.hpp>
using namespace std;

void RBubbleSort(int arr[], int size, int i , int k = 0)
{
    if (k >=  (size * size) - k)
    {
        return;
    }
    if(i >= size - 1){
        i = 0;
    }
    if (arr[i] > arr[i + 1])
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    i++;
    k++;
    RBubbleSort(arr, size, i , k);
}
int main()
{
    // 5 4 3 2 1

    int arr[] = {4, 1 ,3 ,9 ,7};
    int size = sizeof(arr) / sizeof(int);
    RBubbleSort(arr, size, 0);
    printArr(arr, size);
    return 0;
}