#include <iostream>
using namespace std;
int reverseArr(int arr[], int size)
{
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        cout << j << " " << i << endl;
    }
    return 0;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int RecursiveReverseArr(int arr[], int j, int i = 0)
{
    if (i >= j / 2)
    {
        return 0;
    }
    swap(&arr[i], &arr[j - i - 1]);
    RecursiveReverseArr(arr, j, i + 1);
}

int main()
{
    int arr[] = {1, 12, 3, 44, 5};
    int size = sizeof(arr) / sizeof(int);
    // reverseArr(arr, size);
    RecursiveReverseArr(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}