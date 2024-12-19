#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partitioning(int arr[], int low, int high)
{
    int j = high, i = low + 1, p = low;
    while (i <= j)
    {
        if (arr[i] < arr[p])
        {
            i++;
        }
        else if (arr[j] > arr[p])
        {
            j--;
        }
        else if (arr[i] >= arr[p] && arr[j] <= arr[p])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    swap(arr[j], arr[p]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int index = partitioning(arr, low, high);
    int left = low;
    int right = index + 1;
    quickSort(arr, low, index - 1);
    quickSort(arr, index + 1, high);
}
int main()
{
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int size = sizeof(arr) / sizeof(int) - 1;
    quickSort(arr, 0, size);
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}