#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the size of input : ";
    cin >> n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cout << "enter position : " << i << " ";
        cin >> arr[i];
    }
    cout << "Output : ";

    // hash
    int hash[n] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    cout << "enter how many time to input: " << endl;
    int q;
    cin >> q;
    while (q--)
    {
        cout << "input : ";
        cin >> q;
        cout << q << " is " << hash[q] << " time found in array" << endl;
    }
    return 0;
}