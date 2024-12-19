#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int linearSearchMin(int arr[], int start, int end)
{
    int minIndex = start;
    for (int i = start + 1; i < end; i++)
    {
        if (arr[minIndex] < arr[i])
        {
            continue;
        }
        minIndex = i;
    }
    cout << "min Element:" << arr[minIndex] << endl;
    return minIndex;
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}